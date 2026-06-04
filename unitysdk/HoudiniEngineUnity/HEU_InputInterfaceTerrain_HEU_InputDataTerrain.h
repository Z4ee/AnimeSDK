#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputData.h"

namespace System { class String; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class TerrainData; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_HEU_INPUTDATATERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17F141D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceTerrain_HEU_InputDataTerrain_TypeDefinitionIndex = 37688;

	class HEU_InputInterfaceTerrain_HEU_InputDataTerrain : public ::HoudiniEngineUnity::HEU_InputData
	{
	public:
		::System::String* _heightFieldName; // 0x18
		::UnityEngine::Terrain* _terrain; // 0x20
		::UnityEngine::TerrainData* _terrainData; // 0x28
		::HoudiniEngineUnity::HAPI_Transform _transform; // 0x30
		::System::Int32 _numPointsX; // 0x58
		::System::Single _heightScale; // 0x5C
		::System::Single _voxelSize; // 0x60
		::System::Int32 _mergeNodeID; // 0x64
		::System::Int32 _heightfieldNodeID; // 0x68
		::System::Int32 _numPointsY; // 0x6C
		::System::Int32 _parentNodeID; // 0x70
		::System::Int32 _heightNodeID; // 0x74
		::System::Int32 _maskNodeID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_HEU_INPUTDATATERRAIN__CTOR_OFFSET))(this);
		}
	};
}

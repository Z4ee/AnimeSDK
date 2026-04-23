#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_LoadBufferBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_DetailProperties; }
namespace HoudiniEngineUnity { class HEU_DetailPrototype; }
namespace HoudiniEngineUnity { class HEU_LoadBufferVolumeLayer; }
namespace HoudiniEngineUnity { class HEU_VolumeScatterTrees; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x8C91D40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolume_TypeDefinitionIndex = 43669;

	class HEU_LoadBufferVolume : public ::HoudiniEngineUnity::HEU_LoadBufferBase
	{
	public:
		::System::String* _specifiedTerrainMaterialName; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* _detailPrototypes; // 0x30
		::Il2CppArray<::System::Single>* _heightMap; // 0x38
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* _splatLayers; // 0x40
		::HoudiniEngineUnity::HEU_VolumeScatterTrees* _scatterTrees; // 0x48
		::System::String* _terrainDataPath; // 0x50
		::System::String* _terrainDataExportPath; // 0x58
		::HoudiniEngineUnity::HEU_DetailProperties* _detailProperties; // 0x60
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* _detailMaps; // 0x68
		::Il2CppArray<::System::Single>* _splatMaps; // 0x70
		::System::Int32 _tileIndex; // 0x78
		::System::Single _terrainSizeX; // 0x7C
		::System::Int32 _heightMapWidth; // 0x80
		::System::Single _heightRange; // 0x84
		::System::Single _terrainSizeY; // 0x88
		::UnityEngine::Vector3 _position; // 0x8C
		::System::Int32 _heightMapHeight; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUME__CTOR_OFFSET))(this);
		}
	};
}

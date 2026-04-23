#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_DetailPrototype; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace System { class String; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_HEU_VOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCDD40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeLayer_TypeDefinitionIndex = 43742;

	class HEU_VolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerName; // 0x10
		::HoudiniEngineUnity::HEU_PartData* _part; // 0x18
		::System::Single _strength; // 0x20
		::System::Boolean _uiExpanded; // 0x24
		::System::Int32 _tile; // 0x28
		::System::Int32 _xLength; // 0x2C
		::System::Int32 _yLength; // 0x30
		::System::Boolean _hasLayerAttributes; // 0x34
		::UnityEngine::TerrainLayer* _terrainLayer; // 0x38
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x40
		::HoudiniEngineUnity::HEU_DetailPrototype* _detailPrototype; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}

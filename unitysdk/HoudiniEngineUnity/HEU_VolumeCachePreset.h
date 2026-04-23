#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_VolumeLayerPreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_VOLUMECACHEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD0DE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeCachePreset_TypeDefinitionIndex = 43484;

	class HEU_VolumeCachePreset : public ::System::Object
	{
	public:
		::System::String* _objName; // 0x10
		::System::String* _geoName; // 0x18
		::System::Boolean _uiExpanded; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* _volumeLayersPresets; // 0x28
		::System::String* _terrainDataPath; // 0x30
		::System::Int32 _tile; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHEPRESET__CTOR_OFFSET))(this);
		}
	};
}

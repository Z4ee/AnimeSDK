#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_VOLUMELAYERPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6E560)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeLayerPreset_TypeDefinitionIndex = 37405;

	class HEU_VolumeLayerPreset : public ::System::Object
	{
	public:
		::System::String* _layerName; // 0x10
		::System::Single _strength; // 0x18
		::System::Boolean _uiExpanded; // 0x1C
		::System::Int32 _tile; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYERPRESET__CTOR_OFFSET))(this);
		}
	};
}

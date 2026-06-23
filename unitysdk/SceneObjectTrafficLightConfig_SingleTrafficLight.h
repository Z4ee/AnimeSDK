#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENEOBJECTTRAFFICLIGHTCONFIG_SINGLETRAFFICLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB0B90)

inline static constexpr unsigned int SceneObjectTrafficLightConfig_SingleTrafficLight_TypeDefinitionIndex = 49592;

class SceneObjectTrafficLightConfig_SingleTrafficLight : public ::System::Object
{
public:
	::System::Int32 red_normal_time; // 0x10
	::System::Int32 red_flicker_time; // 0x14
	::System::String* effect_noraml_red; // 0x18
	::System::String* effect_flicker_red; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTTRAFFICLIGHTCONFIG_SINGLETRAFFICLIGHT__CTOR_OFFSET))(this);
	}
};

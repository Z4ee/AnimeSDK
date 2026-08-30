#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C9C081C3F4294E9;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }

#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xED8E270)
#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0xED8E670)

inline static constexpr unsigned int Class_2_1C9C081C3F4294E9___c__DisplayClass13_0_TypeDefinitionIndex = 57468;

class Class_2_1C9C081C3F4294E9___c__DisplayClass13_0 : public ::System::Object
{
public:
	::EffectPlugin::Effect_CustomFollowPlugin* followPlugin; // 0x10
	::RPG::Client::MonoEffectPluginPerformEventListener* performPlugin; // 0x18
	::Class_2_1C9C081C3F4294E9* __4__this; // 0x20
	::System::UInt32 energyNum; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnTrailEffectComplete_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET))(this);
	}
};

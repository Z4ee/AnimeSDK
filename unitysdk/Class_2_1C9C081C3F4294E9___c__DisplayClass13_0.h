#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C9C081C3F4294E9;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }

#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176D33C0)
#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS13_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x176D37C0)

inline static constexpr unsigned int Class_2_1C9C081C3F4294E9___c__DisplayClass13_0_TypeDefinitionIndex = 54747;

class Class_2_1C9C081C3F4294E9___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_2_1C9C081C3F4294E9* __4__this; // 0x10
	::EffectPlugin::Effect_CustomFollowPlugin* followPlugin; // 0x18
	::RPG::Client::MonoEffectPluginPerformEventListener* performPlugin; // 0x20
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5AC0D8B32AD9BFBE;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137CCC60)
#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS19_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x137CD070)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE___c__DisplayClass19_0_TypeDefinitionIndex = 56643;

class Class_2_5AC0D8B32AD9BFBE___c__DisplayClass19_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* targetGo; // 0x10
	::EffectPlugin::Effect_CustomFollowPlugin* followPlugin; // 0x18
	::RPG::Client::MonoEffectPluginPerformEventListener* performPlugin; // 0x20
	::Class_2_5AC0D8B32AD9BFBE* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnTrailEffectComplete_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS19_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET))(this);
	}
};

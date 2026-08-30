#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_D1FF2108DB719510;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E368C0)
#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS8_0___TRYATTACHMUTEXEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x15E371F0)

inline static constexpr unsigned int Class_2_D1FF2108DB719510___c__DisplayClass8_0_TypeDefinitionIndex = 53960;

class Class_2_D1FF2108DB719510___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_D1FF2108DB719510* __4__this; // 0x10
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryAttachMutexEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS8_0___TRYATTACHMUTEXEFFECTS_B__0_OFFSET))(this, a1, a2);
	}
};

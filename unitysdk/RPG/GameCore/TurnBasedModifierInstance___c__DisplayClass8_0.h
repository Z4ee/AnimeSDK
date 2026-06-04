#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF89B80)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS8_0___TRYATTACHMUTEXEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xCF9C960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance___c__DisplayClass8_0_TypeDefinitionIndex = 52148;

	class TurnBasedModifierInstance___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryAttachMutexEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS8_0___TRYATTACHMUTEXEFFECTS_B__0_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9090)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS6_0__RELOADEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xAAE90A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance___c__DisplayClass6_0_TypeDefinitionIndex = 44734;

	class TurnBasedModifierInstance___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* data; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadEffects_b__0(::RPG::Client::MonoEffect* pEffectObject, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS6_0__RELOADEFFECTS_B__0_OFFSET))(this, pEffectObject, extraParams);
		}
	};
}

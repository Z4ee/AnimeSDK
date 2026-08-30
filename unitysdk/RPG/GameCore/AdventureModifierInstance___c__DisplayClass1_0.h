#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___C__DISPLAYCLASS1_0__ATTACHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x193FDFF0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193F9890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInstance___c__DisplayClass1_0_TypeDefinitionIndex = 54626;

	class AdventureModifierInstance___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
		::RPG::GameCore::AdventureModifierInstance* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _AttachEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___C__DISPLAYCLASS1_0__ATTACHEFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}

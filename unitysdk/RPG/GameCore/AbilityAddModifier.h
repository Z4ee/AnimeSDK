#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7C6530)
#define RPG_GAMECORE_ABILITYADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7C65D0)
#define RPG_GAMECORE_ABILITYADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7C6580)
#define RPG_GAMECORE_ABILITYADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA7C64D0)
#define RPG_GAMECORE_ABILITYADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C6620)
#define RPG_GAMECORE_ABILITYADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7C6630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityAddModifier_TypeDefinitionIndex = 45487;

	class AbilityAddModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18
		::RPG::GameCore::GameEntity* ModifierOwnerEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityAddModifier* Init(::RPG::GameCore::GameEntity* pModifierOwnerEntity, ::RPG::GameCore::BaseModifierInstance* pModifierInstance)
		{
			return ((::RPG::GameCore::AbilityAddModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER_INIT_OFFSET))(this, pModifierOwnerEntity, pModifierInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}

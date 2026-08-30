#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE466CD0)
#define RPG_GAMECORE_ABILITYADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE466D70)
#define RPG_GAMECORE_ABILITYADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE466D20)
#define RPG_GAMECORE_ABILITYADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE466C70)
#define RPG_GAMECORE_ABILITYADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE466DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityAddModifier_TypeDefinitionIndex = 56767;

	class AbilityAddModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18
		::RPG::GameCore::GameEntity* ModifierOwnerEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityAddModifier* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BaseModifierInstance* a2)
		{
			return ((::RPG::GameCore::AbilityAddModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYADDMODIFIER_INIT_OFFSET))(this, a1, a2);
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
	};
}

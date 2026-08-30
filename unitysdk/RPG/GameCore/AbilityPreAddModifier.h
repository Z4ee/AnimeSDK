#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }

#define RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE472230)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE472360)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE472280)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE4721E0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4723B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPreAddModifier_TypeDefinitionIndex = 56768;

	class AbilityPreAddModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddModifier* Init(::RPG::GameCore::BaseModifierInstance* a1)
		{
			return ((::RPG::GameCore::AbilityPreAddModifier*(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}
	};
}

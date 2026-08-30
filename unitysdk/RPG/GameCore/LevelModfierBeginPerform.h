#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0xE698C80)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE698D20)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE698CD0)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET UNITYSDK_OFFSET(0xE698C30)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xE698D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelModfierBeginPerform_TypeDefinitionIndex = 56959;

	class LevelModfierBeginPerform : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModfierBeginPerform* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelModfierBeginPerform*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET))(this);
		}
	};
}

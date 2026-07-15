#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0x106C3960)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106C3A00)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106C39B0)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0x106C38F0)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x106C3A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeingStanceCountDown_TypeDefinitionIndex = 54037;

	class AbilityBeingStanceCountDown : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Source; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::System::Boolean IsExtraStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeingStanceCountDown* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::AbilityBeingStanceCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}
	};
}

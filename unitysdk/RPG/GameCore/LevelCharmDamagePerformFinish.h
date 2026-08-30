#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0x18453680)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD19240)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x184536D0)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0x18453620)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharmDamagePerformFinish_TypeDefinitionIndex = 56919;

	class LevelCharmDamagePerformFinish : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* CharmTarget; // 0x18
		::RPG::GameCore::GameEntity* CharmAttack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharmDamagePerformFinish* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharmDamagePerformFinish*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}
	};
}

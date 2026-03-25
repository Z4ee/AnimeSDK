#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97F190)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97F230)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97F1E0)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xA97F130)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xA97F280)
#define RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharmDamagePerformFinish_TypeDefinitionIndex = 45637;

	class LevelCharmDamagePerformFinish : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* CharmAttack; // 0x18
		::RPG::GameCore::GameEntity* CharmTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharmDamagePerformFinish* Init(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::RPG::GameCore::LevelCharmDamagePerformFinish*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH_INIT_OFFSET))(this, pAttacker, pTarget);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMDAMAGEPERFORMFINISH___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}

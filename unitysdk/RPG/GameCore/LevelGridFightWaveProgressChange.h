#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98E180)
#define RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98E0E0)
#define RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98E130)
#define RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA98E1F0)
#define RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98E200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGridFightWaveProgressChange_TypeDefinitionIndex = 45633;

	class LevelGridFightWaveProgressChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint CurrentProgress; // 0x18
		::RPG::GameCore::FixPoint TotalProgress; // 0x20
		::RPG::GameCore::FixPoint DeadLineProgress; // 0x28
		::RPG::GameCore::FixPoint MonsterRemainSummonCount; // 0x30
		::System::Int32 CurrentWaveIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE_CLEAR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRIDFIGHTWAVEPROGRESSCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}

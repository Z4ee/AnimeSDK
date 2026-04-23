#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DC9A0)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DC900)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DC950)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GET_DEADPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6DCA80)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB6DCA00)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DCAF0)
#define RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DCB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteWaveProgressChange_TypeDefinitionIndex = 52281;

	class LevelInfiniteWaveProgressChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* DeadMonsterEntity; // 0x18
		::System::Int32 DeadCount; // 0x20
		::System::UInt32 WaveIndex; // 0x24
		::System::Int32 EscapeCount; // 0x28
		::RPG::GameCore::DeathSource MonsterDeathSource; // 0x2C
		::System::Int32 TotalCount; // 0x30
		::System::UInt32 MonsterID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Progress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GET_PROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeadProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE_GET_DEADPROGRESS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEPROGRESSCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}

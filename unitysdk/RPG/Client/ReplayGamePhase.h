#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleGamePhase.h"

class Class_1_3CB339EE9B90AB0A;
class Class_1_A95A6B41A5C8A63D;
class Class_1_F663F3A72F85007C;

#define RPG_CLIENT_REPLAYGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1797F9B0)
#define RPG_CLIENT_REPLAYGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x1797FA20)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1797FCA0)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYOPFINISH_OFFSET UNITYSDK_OFFSET(0x1797FD40)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET__REPLAYOPEXECUTANT_OFFSET UNITYSDK_OFFSET(0x1797FCE0)
#define RPG_CLIENT_REPLAYGAMEPHASE_ONLEVELSNAPSHOTCHECKAHEAD_OFFSET UNITYSDK_OFFSET(0x1797FC40)
#define RPG_CLIENT_REPLAYGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x1797FAF0)
#define RPG_CLIENT_REPLAYGAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1797F8E0)
#define RPG_CLIENT_REPLAYGAMEPHASE__LEVELTURNENDPROCESS_OFFSET UNITYSDK_OFFSET(0x1797FBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReplayGamePhase_TypeDefinitionIndex = 61300;

	class ReplayGamePhase : public ::RPG::Client::BattleGamePhase
	{
	public:
		::Class_1_A95A6B41A5C8A63D* _Param; // 0x160
		::Class_1_3CB339EE9B90AB0A* _BattleReplayInstance; // 0x168

		::System::Void _ctor(::Class_1_A95A6B41A5C8A63D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A95A6B41A5C8A63D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Void _LevelTurnEndProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE__LEVELTURNENDPROCESS_OFFSET))(this);
		}

		::System::Void OnLevelSnapshotCheckAhead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_ONLEVELSNAPSHOTCHECKAHEAD_OFFSET))(this);
		}

		::System::Boolean get_IsReplayMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYMODE_OFFSET))(this);
		}

		::Class_1_F663F3A72F85007C* get__ReplayOpExecutant()
		{
			return ((::Class_1_F663F3A72F85007C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET__REPLAYOPEXECUTANT_OFFSET))(this);
		}

		::System::Boolean get_IsReplayOpFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYOPFINISH_OFFSET))(this);
		}
	};
}

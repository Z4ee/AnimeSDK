#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_CREATE_OFFSET UNITYSDK_OFFSET(0xBF77100)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVEAFTERFIGHT_OFFSET UNITYSDK_OFFSET(0xBF81A50)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVEPREV_OFFSET UNITYSDK_OFFSET(0xBF81950)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0xBF80920)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEADAFTERFIGHT_OFFSET UNITYSDK_OFFSET(0xBF81A70)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEADPREV_OFFSET UNITYSDK_OFFSET(0xBF81970)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xBF81930)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYINGAFTERFIGHT_OFFSET UNITYSDK_OFFSET(0xBF81A60)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYINGPREV_OFFSET UNITYSDK_OFFSET(0xBF81960)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYING_OFFSET UNITYSDK_OFFSET(0xBF80930)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISFRESHDYING_OFFSET UNITYSDK_OFFSET(0xBF819F0)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISFRESHELIMINATED_OFFSET UNITYSDK_OFFSET(0xBF81990)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISLEAVEPREV_OFFSET UNITYSDK_OFFSET(0xBF81980)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISLEAVE_OFFSET UNITYSDK_OFFSET(0xBF81940)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xBF81AF0)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0xBF81AD0)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_REMAINSTEP_OFFSET UNITYSDK_OFFSET(0xBF81A80)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_SET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xBF81B00)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT_SET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0xBF81AE0)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF81680)
#define RPG_CLIENT_MATCHTHREEGAMEOPPONENT__INITPROPS_OFFSET UNITYSDK_OFFSET(0xBF81690)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGameOpponent_TypeDefinitionIndex = 61649;

	class MatchThreeGameOpponent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* _PropInfos_k__BackingField; // 0x10
		::RPG::Client::MatchThreeOpponentData* _OpponentData_k__BackingField; // 0x18
		::System::Int32 Round; // 0x20
		::System::Int32 MaxHP; // 0x24
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState PrevLiveState; // 0x28
		::System::UInt32 Rank; // 0x2C
		::System::UInt32 SkillEnergy; // 0x30
		::System::Int32 BattleShowDamage; // 0x34
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState LiveStateBeforeFight; // 0x38
		::System::Int32 CurrentStepPower; // 0x3C
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState LiveState; // 0x40
		::System::UInt32 MaxStep; // 0x44
		::System::UInt32 PrevRank; // 0x48
		::System::Int32 Power; // 0x4C
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState LiveStateAfterFight; // 0x50
		::System::Int32 HP; // 0x54
		::System::UInt32 SkillCastCount; // 0x58
		::System::UInt32 CurrentStep; // 0x5C
		::System::Boolean FightWithMirror; // 0x60
		::System::Boolean IsRobot; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeGameOpponent* Create(::RPG::Client::MatchThreeOpponentData* a1)
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_CREATE_OFFSET))(a1);
		}

		::System::Void _InitProps(::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT__INITPROPS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVE_OFFSET))(this);
		}

		::System::Boolean get_IsDying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYING_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEAD_OFFSET))(this);
		}

		::System::Boolean get_IsLeave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISLEAVE_OFFSET))(this);
		}

		::System::Boolean get_IsAlivePrev()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVEPREV_OFFSET))(this);
		}

		::System::Boolean get_IsDyingPrev()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYINGPREV_OFFSET))(this);
		}

		::System::Boolean get_IsDeadPrev()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEADPREV_OFFSET))(this);
		}

		::System::Boolean get_IsLeavePrev()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISLEAVEPREV_OFFSET))(this);
		}

		::System::Boolean get_IsFreshEliminated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISFRESHELIMINATED_OFFSET))(this);
		}

		::System::Boolean get_IsFreshDying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISFRESHDYING_OFFSET))(this);
		}

		::System::Boolean get_IsAliveAfterFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISALIVEAFTERFIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsDyingAfterFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDYINGAFTERFIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsDeadAfterFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_ISDEADAFTERFIGHT_OFFSET))(this);
		}

		::System::UInt32 get_RemainStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_REMAINSTEP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* get_PropInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_PROPINFOS_OFFSET))(this);
		}

		::System::Void set_PropInfos(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_SET_PROPINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeOpponentData* get_OpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Void set_OpponentData(::RPG::Client::MatchThreeOpponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEOPPONENT_SET_OPPONENTDATA_OFFSET))(this, a1);
		}
	};
}

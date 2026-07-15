#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_6DAE9C054A93B835;
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleBattleScoreDisplayParams; }
namespace RPG::Client::ActivityMarble { class MarblePVEMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamLimitation; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEPVEMATCH_OFFSET UNITYSDK_OFFSET(0x19A82F30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETBATTLESCOREPARAMS_OFFSET UNITYSDK_OFFSET(0x19A83670)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0x19A83200)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETSELFTEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x19A83810)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET UNITYSDK_OFFSET(0x19A83E60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A83FD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x19A83F90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x19A837B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x19A83F70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x19A83F50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0x19A83FB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A83F00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETOPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x19A831B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSELFPLAYER_OFFSET UNITYSDK_OFFSET(0x19A83160)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET UNITYSDK_OFFSET(0x19A83EA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A83FE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x19A83FA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x19A83F80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x19A83F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0x19A83FC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SYNCLEVELID_OFFSET UNITYSDK_OFFSET(0x19A83110)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A82EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A82EC0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchContext_TypeDefinitionIndex = 71259;

	class MarbleMatchContext : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::IMarblePlayer* _SelfPlayer_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MarbleBall*>* _BallInfos; // 0x18
		::Class_2_6DAE9C054A93B835* _CacheInstance_k__BackingField; // 0x20
		::RPG::Client::ActivityMarble::IMarblePlayer* _OpponentPlayer_k__BackingField; // 0x28
		::RPG::Client::ActivityMarble::MarbleBattleScoreDisplayParams* _ScoreParams; // 0x30
		::System::Boolean _IsPVP_k__BackingField; // 0x38
		::System::UInt32 _LevelID; // 0x3C
		::RPG::Client::TextID _SubTitle_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePVEMatchContext* CreatePVEMatch(::RPG::GameCore::MarbleMatchInfoConfigRow* a1, ::RPG::Client::ActivityMarble::MarblePvePlayer* a2)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVEMatchContext*(*)(::RPG::GameCore::MarbleMatchInfoConfigRow*, ::RPG::Client::ActivityMarble::MarblePvePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEPVEMATCH_OFFSET))(a1, a2);
		}

		::System::Void SyncLevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SYNCLEVELID_OFFSET))(this, a1);
		}

		::System::Void SetSelfPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSELFPLAYER_OFFSET))(this, a1);
		}

		::System::Void SetOpponentPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETOPPONENTPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* GetMarbleBall(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleBattleScoreDisplayParams* GetBattleScoreParams()
		{
			return ((::RPG::Client::ActivityMarble::MarbleBattleScoreDisplayParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETBATTLESCOREPARAMS_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* GetSelfTeamSelection()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETSELFTEAMSELECTION_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* GetTeamLimitation()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamLimitation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET))(this);
		}

		::System::Void SetSubTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET))(this, a1);
		}

		::System::Void SaveMarbleInstance(::Class_2_6DAE9C054A93B835* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6DAE9C054A93B835*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleMatchLevelConfigRow* get_LevelConfig()
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_SelfPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SELFPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_OpponentPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_OPPONENTPLAYER_OFFSET))(this);
		}

		::System::Void set_OpponentPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_OPPONENTPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPVP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_ISPVP_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SUBTITLE_OFFSET))(this);
		}

		::System::Void set_SubTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SUBTITLE_OFFSET))(this, a1);
		}

		::Class_2_6DAE9C054A93B835* get_CacheInstance()
		{
			return ((::Class_2_6DAE9C054A93B835*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET))(this);
		}

		::System::Void set_CacheInstance(::Class_2_6DAE9C054A93B835* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6DAE9C054A93B835*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET))(this, a1);
		}
	};
}

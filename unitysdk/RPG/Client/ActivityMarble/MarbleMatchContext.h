#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_F210ECEF2F23D680;
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

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEPVEMATCH_OFFSET UNITYSDK_OFFSET(0x9C03E30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETBATTLESCOREPARAMS_OFFSET UNITYSDK_OFFSET(0x9C04550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0x9C04120)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETSELFTEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x9C046F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET UNITYSDK_OFFSET(0x9C04B20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C04C90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9C04C50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9C04690)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x9C04C30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x9C04C10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0x9C04C70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C04BC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETOPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x9C040D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSELFPLAYER_OFFSET UNITYSDK_OFFSET(0x9C04080)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET UNITYSDK_OFFSET(0x9C04B60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C04CA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9C04C60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0x9C04C40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x9C04C20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0x9C04C80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SYNCLEVELID_OFFSET UNITYSDK_OFFSET(0x9C04030)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9C03DF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9C03DC0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchContext_TypeDefinitionIndex = 68924;

	class MarbleMatchContext : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleBattleScoreDisplayParams* _ScoreParams; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MarbleBall*>* _BallInfos; // 0x18
		::RPG::Client::ActivityMarble::IMarblePlayer* _SelfPlayer_k__BackingField; // 0x20
		::Class_2_F210ECEF2F23D680* _CacheInstance_k__BackingField; // 0x28
		::RPG::Client::ActivityMarble::IMarblePlayer* _OpponentPlayer_k__BackingField; // 0x30
		::RPG::Client::TextID _SubTitle_k__BackingField; // 0x38
		::System::UInt32 _LevelID; // 0x48
		::System::Boolean _IsPVP_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_1_OFFSET))(this, levelID);
		}

		static ::RPG::Client::ActivityMarble::MarblePVEMatchContext* CreatePVEMatch(::RPG::GameCore::MarbleMatchInfoConfigRow* pveMatchInfo, ::RPG::Client::ActivityMarble::MarblePvePlayer* npcPlayer)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVEMatchContext*(*)(::RPG::GameCore::MarbleMatchInfoConfigRow*, ::RPG::Client::ActivityMarble::MarblePvePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEPVEMATCH_OFFSET))(pveMatchInfo, npcPlayer);
		}

		::System::Void SyncLevelID(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SYNCLEVELID_OFFSET))(this, levelID);
		}

		::System::Void SetSelfPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSELFPLAYER_OFFSET))(this, player);
		}

		::System::Void SetOpponentPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETOPPONENTPLAYER_OFFSET))(this, player);
		}

		::RPG::Client::MarbleBall* GetMarbleBall(::System::UInt32 ballID)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET))(this, ballID);
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

		::System::Void SetSubTitle(::RPG::Client::TextID subTitle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET))(this, subTitle);
		}

		::System::Void SaveMarbleInstance(::Class_2_F210ECEF2F23D680* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F210ECEF2F23D680*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET))(this, instance);
		}

		::RPG::GameCore::MarbleMatchLevelConfigRow* get_LevelConfig()
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_SelfPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SELFPLAYER_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_OpponentPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_OPPONENTPLAYER_OFFSET))(this);
		}

		::System::Void set_OpponentPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_OPPONENTPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_IsPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPVP(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_ISPVP_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SUBTITLE_OFFSET))(this);
		}

		::System::Void set_SubTitle(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SUBTITLE_OFFSET))(this, value);
		}

		::Class_2_F210ECEF2F23D680* get_CacheInstance()
		{
			return ((::Class_2_F210ECEF2F23D680*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET))(this);
		}

		::System::Void set_CacheInstance(::Class_2_F210ECEF2F23D680* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F210ECEF2F23D680*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET))(this, value);
		}
	};
}

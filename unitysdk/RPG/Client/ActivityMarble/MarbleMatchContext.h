#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_01150FCB8364F830;
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleBattleScoreDisplayParams; }
namespace RPG::Client::ActivityMarble { class MarblePVEMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamLimitation; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEBALL_OFFSET UNITYSDK_OFFSET(0xC5409C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEPVEMATCH_OFFSET UNITYSDK_OFFSET(0xC53FA70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETBATTLESCOREPARAMS_OFFSET UNITYSDK_OFFSET(0xC540080)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0xC53FE60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETSELFTEAMSELECTION_OFFSET UNITYSDK_OFFSET(0xC540140)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET UNITYSDK_OFFSET(0xC5407F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC540E10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0xC540DD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC540D70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0xC540D30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xC540DB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xC540D90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0xC540DF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC540D10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_TUTORIALGROUPID_OFFSET UNITYSDK_OFFSET(0xC540D50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_LOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xC53FBC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xC5408E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC540890)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETOPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xC53FE10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSELFPLAYER_OFFSET UNITYSDK_OFFSET(0xC53FDC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET UNITYSDK_OFFSET(0xC540830)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC540E20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0xC540DE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC540D80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0xC540D40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xC540DC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xC540DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0xC540E00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC540D20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_TUTORIALGROUPID_OFFSET UNITYSDK_OFFSET(0xC540D60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC53FA20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC53F9E0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchContext_TypeDefinitionIndex = 75967;

	class MarbleMatchContext : public ::System::Object
	{
	public:
		::Class_2_01150FCB8364F830* _CacheInstance_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MarbleBall*>* _BallInfos; // 0x18
		::RPG::Client::ActivityMarble::MarbleBattleScoreDisplayParams* _ScoreParams; // 0x20
		::RPG::Client::ActivityMarble::IMarblePlayer* _OpponentPlayer_k__BackingField; // 0x28
		::RPG::Client::ActivityMarble::IMarblePlayer* _SelfPlayer_k__BackingField; // 0x30
		::System::String* _JsonConfigPath_k__BackingField; // 0x38
		::System::UInt32 _TutorialGroupID_k__BackingField; // 0x40
		::System::UInt32 _LevelID; // 0x44
		::System::UInt32 _TotalScore_k__BackingField; // 0x48
		::System::Boolean _IsPVP_k__BackingField; // 0x4C
		::RPG::Client::TextID _SubTitle_k__BackingField; // 0x50
		::RPG::Client::TextID _LevelDesc_k__BackingField; // 0x60

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

		::System::Void LoadLevelConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_LOADLEVELCONFIG_OFFSET))(this, a1);
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

		::RPG::Client::ActivityMarble::MarbleTeamSelection* GetSelfTeamSelection()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETSELFTEAMSELECTION_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* GetTeamLimitation()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamLimitation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET))(this);
		}

		::System::Void SetSubTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SETSUBTITLE_OFFSET))(this, a1);
		}

		::System::Void SaveMarbleInstance(::Class_2_01150FCB8364F830* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_01150FCB8364F830*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SAVEMARBLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void OnLoadLevelConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* CreateBall(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_CREATEBALL_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LevelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_LEVELDESC_OFFSET))(this);
		}

		::System::Void set_LevelDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_LEVELDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_TutorialGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_TUTORIALGROUPID_OFFSET))(this);
		}

		::System::Void set_TutorialGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_TUTORIALGROUPID_OFFSET))(this, a1);
		}

		::System::String* get_JsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_JSONCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_JsonConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_JSONCONFIGPATH_OFFSET))(this, a1);
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

		::Class_2_01150FCB8364F830* get_CacheInstance()
		{
			return ((::Class_2_01150FCB8364F830*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_GET_CACHEINSTANCE_OFFSET))(this);
		}

		::System::Void set_CacheInstance(::Class_2_01150FCB8364F830* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_01150FCB8364F830*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTEXT_SET_CACHEINSTANCE_OFFSET))(this, a1);
		}
	};
}

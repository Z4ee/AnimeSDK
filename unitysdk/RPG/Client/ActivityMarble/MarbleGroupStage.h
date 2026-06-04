#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleGroupPlayerRankInfo; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETLASTPLAYERRANKINFOLIST_OFFSET UNITYSDK_OFFSET(0xB1A00F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETPLAYERRANKINFOLIST_OFFSET UNITYSDK_OFFSET(0xB1A00B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0xB1A03F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_ENEMYPLAYER_OFFSET UNITYSDK_OFFSET(0xB1A0490)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xB19FCB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0xB1A0470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0xB1A0430)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB1A0540)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0xB1A0450)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xB1A0410)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xB19FCC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSETTLEPAGEVIEW_OFFSET UNITYSDK_OFFSET(0xB1A0290)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET UNITYSDK_OFFSET(0xB1A0130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0xB1A0400)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0xB1A0480)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0xB1A0440)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB1A0550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0xB1A0460)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xB1A0420)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0xB19FD40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB19FB10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__UPDATEPLAYERLIST_OFFSET UNITYSDK_OFFSET(0xB19FE00)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleGroupStage_TypeDefinitionIndex = 69754;

	class MarbleGroupStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* _PlayerRankInfoList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* _LastPlayerRankInfoList; // 0x18
		::RPG::Client::TextID _StageName_k__BackingField; // 0x20
		::System::UInt32 _ProgressID_k__BackingField; // 0x30
		::System::UInt32 _EmmyPlayerID; // 0x34
		::RPG::Client::TextID _ProgressName_k__BackingField; // 0x38
		::System::UInt32 _RewardID_k__BackingField; // 0x48
		::System::UInt32 _CurrentMatchNumber_k__BackingField; // 0x4C
		::System::UInt32 _TotalMatchCount_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* GetPlayerRankInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETPLAYERRANKINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* GetLastPlayerRankInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETLASTPLAYERRANKINFOLIST_OFFSET))(this);
		}

		::System::Void OpenStageInfoPageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET))(this, a1);
		}

		::System::Void OpenSettlePageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSETTLEPAGEVIEW_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlayerList(::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__UPDATEPLAYERLIST_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CurrentMatchNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentMatchNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalMatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_TOTALMATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalMatchCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_TOTALMATCHCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarblePhaseType get_Phase()
		{
			return ((::RPG::GameCore::MarblePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PHASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSNAME_OFFSET))(this);
		}

		::System::Void set_ProgressName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void set_StageName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_STAGENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* get_EnemyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_ENEMYPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_REWARDID_OFFSET))(this, a1);
		}
	};
}

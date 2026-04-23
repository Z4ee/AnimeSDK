#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationRoundInfo; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x9C02090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9C01900)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x9C02110)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x9C020D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9C02130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x9C020F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9C020B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0x9C01550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSETTLEPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x9C01EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x9C01C60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x9C020A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x9C02120)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x9C020E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9C02140)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x9C02100)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9C020C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0x9C01BD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C01540)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleChampionshipStage_TypeDefinitionIndex = 68939;

	class MarbleChampionshipStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*>* RandInfoList; // 0x10
		::System::UInt32 _RewardID_k__BackingField; // 0x18
		::System::UInt32 _TotalMatchCount_k__BackingField; // 0x1C
		::System::UInt32 _CurrentMatchNumber_k__BackingField; // 0x20
		::System::UInt32 _ProgressID_k__BackingField; // 0x24
		::RPG::Client::TextID _ProgressName_k__BackingField; // 0x28
		::RPG::Client::TextID _StageName_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 progressID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SYNC_OFFSET))(this, progressID);
		}

		::System::Void OpenStageInfoPageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::Void OpenSettlePageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSETTLEPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::UInt32 get_CurrentMatchNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentMatchNumber(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalMatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_TOTALMATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalMatchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_TOTALMATCHCOUNT_OFFSET))(this, value);
		}

		::RPG::GameCore::MarblePhaseType get_Phase()
		{
			return ((::RPG::GameCore::MarblePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PHASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSNAME_OFFSET))(this);
		}

		::System::Void set_ProgressName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void set_StageName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_STAGENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSID_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_REWARDID_OFFSET))(this, value);
		}
	};
}

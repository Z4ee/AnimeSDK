#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationRoundInfo; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0xC532AE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xC532310)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0xC532B60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0xC532B20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC532B80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0xC532B40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC532B00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xC531D60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSETTLEPAGEVIEW_OFFSET UNITYSDK_OFFSET(0xC532980)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET UNITYSDK_OFFSET(0xC532760)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0xC532AF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0xC532B70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0xC532B30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC532B90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0xC532B50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC532B10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0xC5326D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC531D50)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleChampionshipStage_TypeDefinitionIndex = 75981;

	class MarbleChampionshipStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*>* RandInfoList; // 0x10
		::System::UInt32 _CurrentMatchNumber_k__BackingField; // 0x18
		::System::UInt32 _TotalMatchCount_k__BackingField; // 0x1C
		::System::UInt32 _ProgressID_k__BackingField; // 0x20
		::System::UInt32 _RewardID_k__BackingField; // 0x24
		::RPG::Client::TextID _StageName_k__BackingField; // 0x28
		::RPG::Client::TextID _ProgressName_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SYNC_OFFSET))(this, a1);
		}

		::System::Void OpenStageInfoPageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET))(this, a1);
		}

		::System::Void OpenSettlePageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_OPENSETTLEPAGEVIEW_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentMatchNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentMatchNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalMatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_TOTALMATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalMatchCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_TOTALMATCHCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarblePhaseType get_Phase()
		{
			return ((::RPG::GameCore::MarblePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PHASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSNAME_OFFSET))(this);
		}

		::System::Void set_ProgressName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void set_StageName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_STAGENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_PROGRESSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECHAMPIONSHIPSTAGE_SET_REWARDID_OFFSET))(this, a1);
		}
	};
}

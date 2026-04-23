#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationRoundInfo; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x9C03D00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9C03920)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x9C03D80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x9C03D40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9C03DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x9C03D60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9C03D20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0x9C03570)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_OPENSETTLEPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x9C03B60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x9C039C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x9C03D10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x9C03D90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x9C03D50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9C03DB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x9C03D70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9C03D30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0x9C03930)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C03560)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleKnockoutStage_TypeDefinitionIndex = 68944;

	class MarbleKnockoutStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*>* KnockoutRandList; // 0x10
		::RPG::Client::TextID _StageName_k__BackingField; // 0x18
		::RPG::Client::TextID _ProgressName_k__BackingField; // 0x28
		::System::UInt32 _CurrentMatchNumber_k__BackingField; // 0x38
		::System::UInt32 _ProgressID_k__BackingField; // 0x3C
		::System::UInt32 _RewardID_k__BackingField; // 0x40
		::System::UInt32 _TotalMatchCount_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 progressID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SYNC_OFFSET))(this, progressID);
		}

		::System::Void OpenStageInfoPageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::Void OpenSettlePageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_OPENSETTLEPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::UInt32 get_CurrentMatchNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_CURRENTMATCHNUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentMatchNumber(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_CURRENTMATCHNUMBER_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalMatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_TOTALMATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalMatchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_TOTALMATCHCOUNT_OFFSET))(this, value);
		}

		::RPG::GameCore::MarblePhaseType get_Phase()
		{
			return ((::RPG::GameCore::MarblePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PHASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PROGRESSNAME_OFFSET))(this);
		}

		::System::Void set_ProgressName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_PROGRESSNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void set_StageName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_STAGENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_PROGRESSID_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEKNOCKOUTSTAGE_SET_REWARDID_OFFSET))(this, value);
		}
	};
}

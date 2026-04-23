#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_7.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EFC5657EFE4E7C9;
namespace RPG::Client { class ChallengeLineup; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F5FDA0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GETLINEUP_OFFSET UNITYSDK_OFFSET(0x9F5FE10)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x9F5FC30)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9F5FB80)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x9F5FBC0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x9F5FB90)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F5FC10)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x9F5FBA0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_STATISTICRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x9F5FBB0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F5FC40)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x9F5FEB0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_SETDATADIRTYIFNOLINEUP_OFFSET UNITYSDK_OFFSET(0x9F5F7D0)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F5FC20)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F5F570)
#define RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA__ONGETRECOMMENDLINEUP_OFFSET UNITYSDK_OFFSET(0x9F5FF20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStatisticRecommendLineupData_TypeDefinitionIndex = 58150;

	class ChallengeStatisticRecommendLineupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeLineup*>* _Lineups; // 0x10
		::System::UInt32 _ChallengeID_k__BackingField; // 0x18
		::System::Boolean _IsDataReady_k__BackingField; // 0x1C
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 challengeID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA__CTOR_OFFSET))(this, challengeID, groupType);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_01618AD0437C8486_7 get_StatisticRecommendType()
		{
			return ((::Enum_3_01618AD0437C8486_7(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_STATISTICRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET))(this, value);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_REFRESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void SetDataDirtyIfNoLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_SETDATADIRTYIFNOLINEUP_OFFSET))(this);
		}

		::RPG::Client::ChallengeLineup* GetLineup(::System::Int32 index)
		{
			return ((::RPG::Client::ChallengeLineup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_GETLINEUP_OFFSET))(this, index);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType actionType, ::System::Boolean isShowOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA_REPORTACTION_OFFSET))(this, actionType, isShowOwnership);
		}

		::System::Void _OnGetRecommendLineup(::Class_1_2EFC5657EFE4E7C9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTATISTICRECOMMENDLINEUPDATA__ONGETRECOMMENDLINEUP_OFFSET))(this, rsp);
		}
	};
}

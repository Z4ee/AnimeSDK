#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_637CF5391C15E01B;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectContext; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEEFFECTLISTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x9AE5DF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEWORKEFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x9AE3EA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEGETRATIO_OFFSET UNITYSDK_OFFSET(0x9AE7000)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEREDUCERATIO_OFFSET UNITYSDK_OFFSET(0x9AE70A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGESTAT_OFFSET UNITYSDK_OFFSET(0x9AE6CC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x9AE6200)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKSTATVALUEWITHCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9AE6710)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AE3E50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_GET_CURRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9AE8000)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_INIT_OFFSET UNITYSDK_OFFSET(0x9AE3BE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTBYTRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x9AE5180)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTONPROGRESSINGADDITION_OFFSET UNITYSDK_OFFSET(0x9AE57B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKAGENDAFIRSTWORK_OFFSET UNITYSDK_OFFSET(0x9AE7760)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLELIST_OFFSET UNITYSDK_OFFSET(0x9AE7820)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLETRIALGRADE_OFFSET UNITYSDK_OFFSET(0x9AE79D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKMINIGAMELIST_OFFSET UNITYSDK_OFFSET(0x9AE7F00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSINGLECONDITION_OFFSET UNITYSDK_OFFSET(0x9AE6540)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATGRADE_OFFSET UNITYSDK_OFFSET(0x9AE7A50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATVALUE_OFFSET UNITYSDK_OFFSET(0x9AE6A90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AE7600)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKTYPE_OFFSET UNITYSDK_OFFSET(0x9AE7C40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE8020)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectCalculator_TypeDefinitionIndex = 69546;

	class ActivityHipplenEffectCalculator : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectContext* _EffectContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* CalculateWorkEffectViewData(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* workList, ::RPG::GameCore::HipplenGameGradeType miniGameGradeType)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEWORKEFFECTVIEWDATA_OFFSET))(this, workList, miniGameGradeType);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* CalculateEffectListViewData(::System::Collections::Generic::List_1<::System::UInt32>* effectIDList, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* work)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEEFFECTLISTVIEWDATA_OFFSET))(this, effectIDList, work);
		}

		::System::Boolean CheckCondition(::System::Collections::Generic::IList_1<::Class_1_637CF5391C15E01B*>* conditions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_637CF5391C15E01B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKCONDITION_OFFSET))(this, conditions);
		}

		::System::Boolean CheckStatValueWithChangeValue(::System::Collections::Generic::IList_1<::Class_1_637CF5391C15E01B*>* conditions, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* changeData, ::RPG::GameCore::HipplenStatType statType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_637CF5391C15E01B*>*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKSTATVALUEWITHCHANGEVALUE_OFFSET))(this, conditions, changeData, statType);
		}

		::System::Void ChangeStat(::System::UInt32 typeInt, ::System::Int32 val, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* result, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGESTAT_OFFSET))(this, typeInt, val, result, source);
		}

		::System::Void ChangeGetRatio(::System::UInt32 typeInt, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEGETRATIO_OFFSET))(this, typeInt, val);
		}

		::System::Void ChangeReduceRatio(::System::UInt32 typeInt, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEREDUCERATIO_OFFSET))(this, typeInt, val);
		}

		::System::Void _CalculateTraitEffectByTriggerType(::Class_1_D379DAD8E919E749_TriggerType triggerType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D379DAD8E919E749_TriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTBYTRIGGERTYPE_OFFSET))(this, triggerType);
		}

		::System::Void _CalculateTraitEffectOnProgressingAddition(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* resData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTONPROGRESSINGADDITION_OFFSET))(this, resData);
		}

		::System::Boolean _CheckSingleCondition(::Class_1_637CF5391C15E01B* condition)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_637CF5391C15E01B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSINGLECONDITION_OFFSET))(this, condition);
		}

		::System::Boolean _CheckWorkList(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKLIST_OFFSET))(this, param);
		}

		::System::Boolean _CheckAgendaFirstWork(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKAGENDAFIRSTWORK_OFFSET))(this, param);
		}

		::System::Boolean _CheckCycleList(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLELIST_OFFSET))(this, param);
		}

		::System::Boolean _CheckCycleTrialGrade(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLETRIALGRADE_OFFSET))(this, param);
		}

		::System::Boolean _CheckStatGrade(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATGRADE_OFFSET))(this, param);
		}

		::System::Boolean _CheckWorkType(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKTYPE_OFFSET))(this, param);
		}

		::System::Boolean _CheckMiniGameList(::System::String* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKMINIGAMELIST_OFFSET))(this, param);
		}

		::System::Boolean _CheckStatValue(::System::String* param, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* changeData, ::RPG::GameCore::HipplenStatType statType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATVALUE_OFFSET))(this, param, changeData, statType);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_CurResultData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_GET_CURRESULTDATA_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1102;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutineManager; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDTRAITRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9AE7140)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDWORKRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9AE5A30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CHECKENERGYOVERFLOW_OFFSET UNITYSDK_OFFSET(0x9AE71E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x9AE8030)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TOTALRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9AE8070)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x9AE8050)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0x9AE8090)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_WORKRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0x9AE80B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x9AE4A70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x9AE8040)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TOTALRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9AE8080)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x9AE8060)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0x9AE80A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_WORKRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0x9AE80C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE3C60)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectContext_TypeDefinitionIndex = 69554;

	class ActivityHipplenEffectContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1102*>* _TraitEffectList_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* Work; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _TraitResultDataList_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* _TotalResultData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* _TraitList; // 0x30
		::Il2CppArray<::System::Single>* StatGetRatio; // 0x38
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* _RoutineMgr_k__BackingField; // 0x40
		::Il2CppArray<::System::Single>* StatReduceRatio; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _WorkResultDataList_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_RESET_OFFSET))(this);
		}

		::System::Void AddTraitResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDTRAITRESULTDATA_OFFSET))(this, data);
		}

		::System::Void AddWorkResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDWORKRESULTDATA_OFFSET))(this, data);
		}

		::System::Void CheckEnergyOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CHECKENERGYOVERFLOW_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* get_RoutineMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_ROUTINEMGR_OFFSET))(this);
		}

		::System::Void set_RoutineMgr(::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_ROUTINEMGR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1102*>* get_TraitEffectList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1102*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_TraitEffectList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1102*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITEFFECTLIST_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_TotalResultData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TOTALRESULTDATA_OFFSET))(this);
		}

		::System::Void set_TotalResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TOTALRESULTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_TraitResultDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITRESULTDATALIST_OFFSET))(this);
		}

		::System::Void set_TraitResultDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITRESULTDATALIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_WorkResultDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_WORKRESULTDATALIST_OFFSET))(this);
		}

		::System::Void set_WorkResultDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_WORKRESULTDATALIST_OFFSET))(this, value);
		}
	};
}

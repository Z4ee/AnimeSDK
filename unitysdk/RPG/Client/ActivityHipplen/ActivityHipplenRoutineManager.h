#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/RPG/GameCore/HipplenWorkType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_9;
class Class_1_66C20D6C355B068E_3;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutine; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_CALCULATEEFFECTVIEWDATABYROUTINE_OFFSET UNITYSDK_OFFSET(0x9AFDEF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AFD2B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETEMPTYBLOCKNUM_OFFSET UNITYSDK_OFFSET(0x9AFE770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETFILTERSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFEAF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETPROGRESSINGWORKLISTWITHEMPTYBLOCK_OFFSET UNITYSDK_OFFSET(0x9AFE560)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETSORTEDSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFE990)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0x9AFEC50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFEC30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x9AFEBF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFEC10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0x9AFEC70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9AFD150)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SETANDSTARTROUTINE_OFFSET UNITYSDK_OFFSET(0x9AFDCC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0x9AFEC60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFEC40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x9AFEC00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFEC20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0x9AFEC80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYGETNEXTPROGRESSINGWORK_OFFSET UNITYSDK_OFFSET(0x9AFE1D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYPUSHNEXTPROGRESSINGWORKSTATE_OFFSET UNITYSDK_OFFSET(0x9AFE320)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET UNITYSDK_OFFSET(0x9AFD350)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEALLWORKVIEWDATA_OFFSET UNITYSDK_OFFSET(0x9AFC370)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x9AFD860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFEC90)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutineManager_TypeDefinitionIndex = 69664;

	class ActivityHipplenRoutineManager : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _ExtraWorkData_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* _Routine_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _SelectableWorkList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _ProgressingWorkList_k__BackingField; // 0x28
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* _TrialData_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateAgenda(::Class_1_2E57B88467AF63C8_9* agendaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET))(this, agendaData);
		}

		::System::Void UpdateProgressingWorkList(::System::Collections::Generic::IList_1<::Class_1_66C20D6C355B068E_3*>* workList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_66C20D6C355B068E_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET))(this, workList);
		}

		::System::Void UpdateAllWorkViewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEALLWORKVIEWDATA_OFFSET))(this);
		}

		::System::Void SetAndStartRoutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SETANDSTARTROUTINE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* CalculateEffectViewDataByRoutine()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_CALCULATEEFFECTVIEWDATABYROUTINE_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* TryGetNextProgressingWork()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYGETNEXTPROGRESSINGWORK_OFFSET))(this);
		}

		::System::Void TryPushNextProgressingWorkState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYPUSHNEXTPROGRESSINGWORKSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetProgressingWorkListWithEmptyBlock()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETPROGRESSINGWORKLISTWITHEMPTYBLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetSortedSelectableWorkList(::RPG::GameCore::HipplenStatType statType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETSORTEDSELECTABLEWORKLIST_OFFSET))(this, statType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetFilterSelectableWorkList(::RPG::GameCore::HipplenWorkType workType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::RPG::GameCore::HipplenWorkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETFILTERSELECTABLEWORKLIST_OFFSET))(this, workType);
		}

		::System::Int32 GetEmptyBlockNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETEMPTYBLOCKNUM_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* get_Routine()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_ROUTINE_OFFSET))(this);
		}

		::System::Void set_Routine(::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_ROUTINE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_SelectableWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_SELECTABLEWORKLIST_OFFSET))(this);
		}

		::System::Void set_SelectableWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_SELECTABLEWORKLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_ProgressingWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_PROGRESSINGWORKLIST_OFFSET))(this);
		}

		::System::Void set_ProgressingWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_PROGRESSINGWORKLIST_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* get_ExtraWorkData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_EXTRAWORKDATA_OFFSET))(this);
		}

		::System::Void set_ExtraWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_EXTRAWORKDATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* get_TrialData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_TRIALDATA_OFFSET))(this);
		}

		::System::Void set_TrialData(::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_TRIALDATA_OFFSET))(this, value);
		}
	};
}

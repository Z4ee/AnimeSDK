#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/RPG/GameCore/HipplenWorkType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_7;
class Class_1_66C20D6C355B068E_3;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutine; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_CALCULATEEFFECTVIEWDATABYROUTINE_OFFSET UNITYSDK_OFFSET(0xB0E1E90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0CE030)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETEMPTYBLOCKNUM_OFFSET UNITYSDK_OFFSET(0xB0E24B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETFILTERSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E2850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETPROGRESSINGWORKLISTWITHEMPTYBLOCK_OFFSET UNITYSDK_OFFSET(0xB0E2170)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETSORTEDSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E26D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0xB0E29C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E29A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_ROUTINE_OFFSET UNITYSDK_OFFSET(0xB0E2960)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E2980)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0xB0E29E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB0CDC50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SETANDSTARTROUTINE_OFFSET UNITYSDK_OFFSET(0xB0E1C20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0xB0E29D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E29B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_ROUTINE_OFFSET UNITYSDK_OFFSET(0xB0E2970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E2990)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0xB0E29F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYGETNEXTPROGRESSINGWORK_OFFSET UNITYSDK_OFFSET(0xB0CEDE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYPUSHNEXTPROGRESSINGWORKSTATE_OFFSET UNITYSDK_OFFSET(0xB0CEEF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET UNITYSDK_OFFSET(0xB0CE190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEALLWORKVIEWDATA_OFFSET UNITYSDK_OFFSET(0xB0E0770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0xB0E1750)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CDC40)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutineManager_TypeDefinitionIndex = 70476;

	class ActivityHipplenRoutineManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _SelectableWorkList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _ProgressingWorkList_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* _Routine_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* _TrialData_k__BackingField; // 0x28
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _ExtraWorkData_k__BackingField; // 0x30

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

		::System::Void UpdateAgenda(::Class_1_2E57B88467AF63C8_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET))(this, a1);
		}

		::System::Void UpdateProgressingWorkList(::System::Collections::Generic::IList_1<::Class_1_66C20D6C355B068E_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_66C20D6C355B068E_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetSortedSelectableWorkList(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETSORTEDSELECTABLEWORKLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetFilterSelectableWorkList(::RPG::GameCore::HipplenWorkType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::RPG::GameCore::HipplenWorkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETFILTERSELECTABLEWORKLIST_OFFSET))(this, a1);
		}

		::System::Int32 GetEmptyBlockNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETEMPTYBLOCKNUM_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* get_Routine()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_ROUTINE_OFFSET))(this);
		}

		::System::Void set_Routine(::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_ROUTINE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_SelectableWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_SELECTABLEWORKLIST_OFFSET))(this);
		}

		::System::Void set_SelectableWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_SELECTABLEWORKLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_ProgressingWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_PROGRESSINGWORKLIST_OFFSET))(this);
		}

		::System::Void set_ProgressingWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_PROGRESSINGWORKLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* get_ExtraWorkData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_EXTRAWORKDATA_OFFSET))(this);
		}

		::System::Void set_ExtraWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_EXTRAWORKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* get_TrialData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_TRIALDATA_OFFSET))(this);
		}

		::System::Void set_TrialData(::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_TRIALDATA_OFFSET))(this, a1);
		}
	};
}

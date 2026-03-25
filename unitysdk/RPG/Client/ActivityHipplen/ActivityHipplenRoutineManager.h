#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/RPG/GameCore/HipplenWorkType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_4;
class Class_1_74DCDF3B84BF5B89;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutine; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_CALCULATEEFFECTVIEWDATABYROUTINE_OFFSET UNITYSDK_OFFSET(0x8F2BF10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F197C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETEMPTYBLOCKNUM_OFFSET UNITYSDK_OFFSET(0x8F2C400)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETFILTERSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETPROGRESSINGWORKLISTWITHEMPTYBLOCK_OFFSET UNITYSDK_OFFSET(0x8F2C1F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GETSORTEDSELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C620)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2C8C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C8A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x8F2C860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_GET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0x8F2C8E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8F193E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SETANDSTARTROUTINE_OFFSET UNITYSDK_OFFSET(0x8F2BCE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_EXTRAWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2C8D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_PROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C8B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x8F2C870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_SELECTABLEWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2C890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_SET_TRIALDATA_OFFSET UNITYSDK_OFFSET(0x8F2C8F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYGETNEXTPROGRESSINGWORK_OFFSET UNITYSDK_OFFSET(0x8F1A380)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_TRYPUSHNEXTPROGRESSINGWORKSTATE_OFFSET UNITYSDK_OFFSET(0x8F1A4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET UNITYSDK_OFFSET(0x8F19930)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEALLWORKVIEWDATA_OFFSET UNITYSDK_OFFSET(0x8F2AB20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2B880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2C900)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutineManager_TypeDefinitionIndex = 61754;

	class ActivityHipplenRoutineManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _ProgressingWorkList_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutine* _Routine_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* _TrialData_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _ExtraWorkData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _SelectableWorkList_k__BackingField; // 0x30

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

		::System::Void UpdateAgenda(::Class_1_2E57B88467AF63C8_4* agendaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEAGENDA_OFFSET))(this, agendaData);
		}

		::System::Void UpdateProgressingWorkList(::System::Collections::Generic::IList_1<::Class_1_74DCDF3B84BF5B89*>* workList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_74DCDF3B84BF5B89*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER_UPDATEPROGRESSINGWORKLIST_OFFSET))(this, workList);
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

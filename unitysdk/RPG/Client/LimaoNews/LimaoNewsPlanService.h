#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_45BB92167AED63A0_54;
class Class_1_4A2801D02B2BB246_8;
class Class_1_584A0EBB2813A76B;
class Class_1_5A55E8BED8FA46A4_5;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewDialogViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewPhaseItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressOngoingViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressResultViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkResultData; }
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEMANAGEMENTPLANINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD46AF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD46C2E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATERESULTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD47B760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWDIALOGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD479F90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWWORKPROGRESSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD478CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATESTARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD46C240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD46FC70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET UNITYSDK_OFFSET(0xD479170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD479580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETPLANDATA_OFFSET UNITYSDK_OFFSET(0xD47C030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANDATA_OFFSET UNITYSDK_OFFSET(0xD46CDC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD46CE10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKDATA_OFFSET UNITYSDK_OFFSET(0xD47BAC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD47C630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKRESULTDATA_OFFSET UNITYSDK_OFFSET(0xD46C1F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xD47C840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDWORKARCHIVEBYWORKID_OFFSET UNITYSDK_OFFSET(0xD47C860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xD47C590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xD47C5B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANUNLOCK_OFFSET UNITYSDK_OFFSET(0xD479D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_LASTFINISHEDPLANID_OFFSET UNITYSDK_OFFSET(0xD47C5F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_PLANDATALIST_OFFSET UNITYSDK_OFFSET(0xD47C820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_REFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD47C5D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_WORKPHASEWAYLIST_OFFSET UNITYSDK_OFFSET(0xD47C610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASANYFINISHEDPLANPHASE_OFFSET UNITYSDK_OFFSET(0xD479DE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASFINISHEDMESSAGEARCHIVE_OFFSET UNITYSDK_OFFSET(0xD47C1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYPLANPHASEACT_OFFSET UNITYSDK_OFFSET(0xD46C750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xD46C420)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDMESSAGEARCHIVE_OFFSET UNITYSDK_OFFSET(0xD472870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDWORKARCHIVE_OFFSET UNITYSDK_OFFSET(0xD4729D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHPLANSTATE_OFFSET UNITYSDK_OFFSET(0xD472260)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REPLAYPLANPHASEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD4789E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xD47C850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDWORKARCHIVEBYWORKID_OFFSET UNITYSDK_OFFSET(0xD47C870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xD47C5A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xD47C5C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_LASTFINISHEDPLANID_OFFSET UNITYSDK_OFFSET(0xD47C600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_PLANDATALIST_OFFSET UNITYSDK_OFFSET(0xD47C830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_REFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD47C5E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_WORKPHASEWAYLIST_OFFSET UNITYSDK_OFFSET(0xD47C620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANPHASEFINISHTASK_OFFSET UNITYSDK_OFFSET(0xD4791B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANSTATUSREFRESHTASK_OFFSET UNITYSDK_OFFSET(0xD479070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CALCULATEMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET UNITYSDK_OFFSET(0xD479BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKISCURRENTPLANUNLOCK_OFFSET UNITYSDK_OFFSET(0xD47C270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xD4793D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEFLOORSAVEDVALUEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0xD47A460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYOPTIONFLOWBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xD47B4B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYWORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD47BB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEOPTIONFLOW_OFFSET UNITYSDK_OFFSET(0xD47AF30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD47A680)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWPHASEITEMS_OFFSET UNITYSDK_OFFSET(0xD47A1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD46F4B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xD47B7F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANDATA_OFFSET UNITYSDK_OFFSET(0xD47C2D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD47C340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTWORKDATA_OFFSET UNITYSDK_OFFSET(0xD47C400)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETMESSAGEOPTIONFLOW_OFFSET UNITYSDK_OFFSET(0xD47AE30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETOPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xD47BD40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETREFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD47C160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__INITPLANDATALIST_OFFSET UNITYSDK_OFFSET(0xD47BE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___CHECKPLANPHASEFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0xD47C880)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanService_TypeDefinitionIndex = 79009;

	class LimaoNewsPlanService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WorkPhaseWayList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A55E8BED8FA46A4_5*>* _FinishedWorkArchiveByWorkID_k__BackingField; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService; // 0x20
		::Class_1_5F4D64A4B97E38F9* Messenger; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_45BB92167AED63A0_54*>* _FinishedMessageArchiveByMessageID_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* _PlanDataList_k__BackingField; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x50
		::Class_1_0BE9E9C1D5A3C687* _LimaoNewsConditionService; // 0x58
		::System::UInt32 _CurrentPlanPhaseID; // 0x60
		::System::UInt32 _CurrentWorkPhaseID; // 0x64
		::System::UInt32 _CurrentPlanID; // 0x68
		::System::UInt32 _CurrentWorkID; // 0x6C
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _ManagementPlanInfoItemViewModelState; // 0x70
		::System::UInt32 _RefreshFinishedPlanPhaseID_k__BackingField; // 0x74
		::System::Boolean _IsCurrentPlanPhaseFinished_k__BackingField; // 0x78
		::System::Boolean _IsCurrentPlanFinished_k__BackingField; // 0x79
		::System::UInt32 _CurrentWorkResultID; // 0x7C
		::System::UInt32 _LastFinishedPlanID_k__BackingField; // 0x80

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsMessageService* a1, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a2, ::RPG::Client::LimaoNews::LimaoNewsNetworkService* a3, ::Class_1_0BE9E9C1D5A3C687* a4, ::RPG::Client::LimaoNews::LimaoNewsOfferingService* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::Class_1_0BE9E9C1D5A3C687*, ::RPG::Client::LimaoNews::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TryTriggerPlanStatusRefreshTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANSTATUSREFRESHTASK_OFFSET))(this);
		}

		::System::Void TryTriggerPlanPhaseFinishTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANPHASEFINISHTASK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* CreateManagementPlanInfoViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEMANAGEMENTPLANINFOVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState GetManagementPlanInfoItemViewModelState()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _CalculateManagementPlanInfoItemViewModelState()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CALCULATEMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* GetManagementPlanInfoItemViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELS_OFFSET))(this);
		}

		::System::Boolean _CheckPlanPhaseFinished(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKPLANPHASEFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyFinishedPlanPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASANYFINISHEDPLANPHASE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel* CreateReviewDialogViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWDIALOGVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* _CreateReviewPhaseItems(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWPHASEITEMS_OFFSET))(this, a1);
		}

		::System::Void ReplayPlanPhasePerformance(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REPLAYPLANPHASEPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* CreateReviewWorkProgressViewModel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWWORKPROGRESSVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMessageOptionFlow(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETMESSAGEOPTIONFLOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* _CreateReviewOngoingViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::Class_1_5A55E8BED8FA46A4_5* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::Class_1_5A55E8BED8FA46A4_5*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWONGOINGVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* CreateResultViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATERESULTVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayWorkResultPerformanceAndShowResultPage(::System::UInt32 a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FinishCurrentPlanPhaseAndShowResultPage(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* CreateStartViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATESTARTVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* CreateOngoingViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEONGOINGVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* _CreateHistoryWorkPhaseDataList(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYWORKPHASEDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _CreateHistoryOptionFlowByMessageID(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYOPTIONFLOWBYMESSAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CreateOptionFlow(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEOPTIONFLOW_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetOptionIndex(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETOPTIONINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshPlanState(::Class_1_4A2801D02B2BB246_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A2801D02B2BB246_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHPLANSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRefreshFinishedPlanPhaseID(::Class_1_4A2801D02B2BB246_8* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_4A2801D02B2BB246_8*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETREFRESHFINISHEDPLANPHASEID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshFinishedMessageArchive(::Class_1_45BB92167AED63A0_54* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDMESSAGEARCHIVE_OFFSET))(this, a1);
		}

		::System::Boolean HasFinishedMessageArchive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASFINISHEDMESSAGEARCHIVE_OFFSET))(this, a1);
		}

		::System::Void RefreshFinishedWorkArchive(::Class_1_5A55E8BED8FA46A4_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDWORKARCHIVE_OFFSET))(this, a1);
		}

		::System::Void PlayPlanPhaseAct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYPLANPHASEACT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* _CreateFloorSavedValueOverrideList(::Il2CppArray<::Class_1_584A0EBB2813A76B*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*(*)(::PVOID, ::Il2CppArray<::Class_1_584A0EBB2813A76B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEFLOORSAVEDVALUEOVERRIDELIST_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* GetPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETPLANDATA_OFFSET))(this, a1);
		}

		::System::Void _InitPlanDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__INITPLANDATALIST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCurrentPlanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKISCURRENTPLANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* _GetCurrentPlanData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* _GetCurrentPlanPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkData* _GetCurrentWorkData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTWORKDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* get_CurrentPlanData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANDATA_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentPlanFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurrentPlanFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrentPlanPhaseFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANPHASEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurrentPlanPhaseFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANPHASEFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshFinishedPlanPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_REFRESHFINISHEDPLANPHASEID_OFFSET))(this);
		}

		::System::Void set_RefreshFinishedPlanPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_REFRESHFINISHEDPLANPHASEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastFinishedPlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_LASTFINISHEDPLANID_OFFSET))(this);
		}

		::System::Void set_LastFinishedPlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_LASTFINISHEDPLANID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_WorkPhaseWayList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_WORKPHASEWAYLIST_OFFSET))(this);
		}

		::System::Void set_WorkPhaseWayList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_WORKPHASEWAYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrentPlanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* get_CurrentPlanPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkData* get_CurrentWorkData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkResultData* get_CurrentWorkResultData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKRESULTDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* get_CurrentWorkPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKPHASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* get_PlanDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_PLANDATALIST_OFFSET))(this);
		}

		::System::Void set_PlanDataList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_PLANDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_45BB92167AED63A0_54*>* get_FinishedMessageArchiveByMessageID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_45BB92167AED63A0_54*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET))(this);
		}

		::System::Void set_FinishedMessageArchiveByMessageID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_45BB92167AED63A0_54*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_45BB92167AED63A0_54*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A55E8BED8FA46A4_5*>* get_FinishedWorkArchiveByWorkID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A55E8BED8FA46A4_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDWORKARCHIVEBYWORKID_OFFSET))(this);
		}

		::System::Void set_FinishedWorkArchiveByWorkID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A55E8BED8FA46A4_5*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A55E8BED8FA46A4_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDWORKARCHIVEBYWORKID_OFFSET))(this, a1);
		}

		::System::Boolean __CheckPlanPhaseFinished_b__6_0(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___CHECKPLANPHASEFINISHED_B__6_0_OFFSET))(this, a1);
		}
	};
}

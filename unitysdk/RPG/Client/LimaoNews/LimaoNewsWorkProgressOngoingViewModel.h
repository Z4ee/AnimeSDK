#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWorkProgressBaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsBoxMessageViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_CREATEWITHHISTORY_OFFSET UNITYSDK_OFFSET(0xD3C88D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD3C8D10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3EAF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xD3EBFE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3EC020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_PLANSERVICE_OFFSET UNITYSDK_OFFSET(0xD3EC040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_STARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3EC000)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_WORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD3EB1A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xD3EBFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3EC030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_PLANSERVICE_OFFSET UNITYSDK_OFFSET(0xD3EC050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_STARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3EC010)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_WORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD3EA8A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDCURRENTPHASEMESSAGES_OFFSET UNITYSDK_OFFSET(0xD3EAC80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDFINISHBACKTIPSMESSAGEIFNEEDED_OFFSET UNITYSDK_OFFSET(0xD3EB8E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYFINISHBACKTIPSMESSAGEIFNEEDED_OFFSET UNITYSDK_OFFSET(0xD3EBD60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xD3EBC40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYMESSAGES_OFFSET UNITYSDK_OFFSET(0xD3EAA00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EA7D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ENTERNEXTPHASE_OFFSET UNITYSDK_OFFSET(0xD3EB470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__FINISHRESULTPHASEIFNOOPTION_OFFSET UNITYSDK_OFFSET(0xD3EAE60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__FINISHRESULTPHASE_OFFSET UNITYSDK_OFFSET(0xD3EB3D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__GETNEXTPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD3EB5C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xD3EA930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD3EBF60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xD3EB050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__RECORDMESSAGEOPTION_OFFSET UNITYSDK_OFFSET(0xD3EB1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__SENDFINISHMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3EB730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__SETRESULTIDBYOPTION_OFFSET UNITYSDK_OFFSET(0xD3EBB80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressOngoingViewModel_TypeDefinitionIndex = 80446;

	class LimaoNewsWorkProgressOngoingViewModel : public ::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* _StartViewModel_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsPlanService* _PlanService_k__BackingField; // 0x40
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService; // 0x48
		::Class_1_BF01A723AB4005C0<::System::Int32>* _OnOptionClickCommand; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _MessageOptionFlowByMessageID; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* _MessageViewModel_k__BackingField; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* _WorkPhaseData; // 0x68
		::System::Boolean _HasAppendFinishBackTipsMessage; // 0x70
		::System::Boolean _IsInFinishState_k__BackingField; // 0x71
		::System::UInt32 _ResultID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a2, ::RPG::Client::LimaoNews::LimaoNewsPlanService* a3, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a4)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::RPG::Client::LimaoNews::LimaoNewsPlanService*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* CreateWithHistory(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a3, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a4, ::RPG::Client::LimaoNews::LimaoNewsPlanService* a5, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a6)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::RPG::Client::LimaoNews::LimaoNewsPlanService*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_CREATEWITHHISTORY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnOptionClick(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void _EnterNextPhase(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ENTERNEXTPHASE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* _GetNextPhaseData(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__GETNEXTPHASEDATA_OFFSET))(this, a1);
		}

		::System::Void _FinishResultPhaseIfNoOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__FINISHRESULTPHASEIFNOOPTION_OFFSET))(this);
		}

		::System::Void _FinishResultPhase(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__FINISHRESULTPHASE_OFFSET))(this, a1);
		}

		::System::Void _AppendCurrentPhaseMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDCURRENTPHASEMESSAGES_OFFSET))(this);
		}

		::System::Void _AppendHistoryMessages(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYMESSAGES_OFFSET))(this, a1, a2);
		}

		::System::Void _AppendHistoryMessageSequence(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYMESSAGESEQUENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AppendHistoryFinishBackTipsMessageIfNeeded(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDHISTORYFINISHBACKTIPSMESSAGEIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void _AppendFinishBackTipsMessageIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__APPENDFINISHBACKTIPSMESSAGEIFNEEDED_OFFSET))(this);
		}

		::System::Void _SetResultIDByOption(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__SETRESULTIDBYOPTION_OFFSET))(this, a1);
		}

		::System::Void _OnAllItemsPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void _RecordMessageOption(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__RECORDMESSAGEOPTION_OFFSET))(this, a1);
		}

		::System::Void _SendFinishMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL__SENDFINISHMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInFinishState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_ISINFINISHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_ISINFINISHSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* get_WorkPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_WORKPHASEDATA_OFFSET))(this);
		}

		::System::Void set_WorkPhaseData(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_WORKPHASEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* get_StartViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_STARTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_StartViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_STARTVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* get_MessageViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_MessageViewModel(::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanService* get_PlanService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_GET_PLANSERVICE_OFFSET))(this);
		}

		::System::Void set_PlanService(::RPG::Client::LimaoNews::LimaoNewsPlanService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSONGOINGVIEWMODEL_SET_PLANSERVICE_OFFSET))(this, a1);
		}
	};
}

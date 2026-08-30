#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWorkProgressBaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsBoxMessageViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressOngoingViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressRecordItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkResultData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_CREATEFORREVIEW_OFFSET UNITYSDK_OFFSET(0x1C4BCF20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4BC7B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4BD4C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_ISINREVIEW_OFFSET UNITYSDK_OFFSET(0x1C4BDB90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDC10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_ONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDB70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_RECORDITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1C4BDBF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x1C4BDBD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_STARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDBB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_PREPAREJUMPINTERACTSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1C4B8860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_ISINREVIEW_OFFSET UNITYSDK_OFFSET(0x1C4BDBA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDC20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_ONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDB80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_RECORDITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1C4BDC00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x1C4BDBE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_STARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BDBC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ADDSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C4BD3A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__APPENDHISTORYMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C4BD270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATEHISTORYMESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BD110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATEMESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4BCEB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATERECORDITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1C4BCB80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BCAB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0x1C4BD900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0x1C4BD650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__RECORDMESSAGEOPTION_OFFSET UNITYSDK_OFFSET(0x1C4BD750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__SENDFINISHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C4BD960)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressResultViewModel_TypeDefinitionIndex = 79126;

	class LimaoNewsWorkProgressResultViewModel : public ::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* _OngoingViewModel_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* _MessageViewModel_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _MessageOptionFlowByMessageID; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>* _RecordItemViewModels_k__BackingField; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* _StartViewModel_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsWorkResultData* _ResultData_k__BackingField; // 0x60
		::System::Boolean _IsInReview_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* CreateForReview(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_CREATEFORREVIEW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* _CreateHistoryMessageViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATEHISTORYMESSAGEVIEWMODEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AppendHistoryMessageSequence(::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__APPENDHISTORYMESSAGESEQUENCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* _CreateMessageViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATEMESSAGEVIEWMODEL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>* _CreateRecordItemViewModels(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__CREATERECORDITEMVIEWMODELS_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* PrepareJumpInteractSubMissionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_PREPAREJUMPINTERACTSUBMISSIONDATA_OFFSET))(this);
		}

		::System::Void _AddSubMissionID(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ADDSUBMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnOptionClick(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void _OnAllItemsPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void _RecordMessageOption(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__RECORDMESSAGEOPTION_OFFSET))(this, a1);
		}

		::System::Void _SendFinishMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL__SENDFINISHMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* get_OngoingViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_ONGOINGVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_OngoingViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_ONGOINGVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInReview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_ISINREVIEW_OFFSET))(this);
		}

		::System::Void set_IsInReview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_ISINREVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* get_StartViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_STARTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_StartViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_STARTVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkResultData* get_ResultData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_RESULTDATA_OFFSET))(this);
		}

		::System::Void set_ResultData(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_RESULTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>* get_RecordItemViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_RECORDITEMVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_RecordItemViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_RECORDITEMVIEWMODELS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* get_MessageViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_MessageViewModel(::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRESULTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMessageItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEMS_OFFSET UNITYSDK_OFFSET(0xD396A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEM_OFFSET UNITYSDK_OFFSET(0xD397740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD397CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xD397B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_OPTIONCLICKED_OFFSET UNITYSDK_OFFSET(0xD397BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_APPENDMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xD397820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD3975F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD396870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETMESSAGEITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3978A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETOPTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD397930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_HISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xD397E60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_MESSAGEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD397DC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD397DA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xD397D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xD397D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_OPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD397E10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD397D00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xD397B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_OPTIONCLICKED_OFFSET UNITYSDK_OFFSET(0xD397C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0xD396F10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_HISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xD397E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD397DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xD397D70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xD397D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3969B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xD397480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xD397AC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xD3979C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xD397A30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsBoxMessageViewModel_TypeDefinitionIndex = 80439;

	class LimaoNewsBoxMessageViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Action_1<::System::Int32>* ItemPlayFinished; // 0x20
		::Class_1_BF01A723AB4005C0<::System::Int32>* _OnOptionClick_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* _MessageItemViewModels; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* _OptionViewModels; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* _CurrentSequence; // 0x40
		::Sofa::Core::SimpleCommand* _OnAllItemsPlayed_k__BackingField; // 0x48
		::Class_1_BF01A723AB4005C0<::System::Int32>* _OnItemPlayFinished_k__BackingField; // 0x50
		::System::Action* AllItemsPlayed; // 0x58
		::System::Action_1<::System::Int32>* OptionClicked; // 0x60
		::System::Int32 _HistoryMessageCount_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* Create(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* Create_1(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsMessageSequence*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_1_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void AddInitialItem(::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEM_OFFSET))(this, a1);
		}

		::System::Void AddInitialItems(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEMS_OFFSET))(this, a1);
		}

		::System::Void SetOptions(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SETOPTIONS_OFFSET))(this, a1);
		}

		::System::Void AppendMessageSequence(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_APPENDMESSAGESEQUENCE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* GetMessageItemViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETMESSAGEITEMVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* GetOptionViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETOPTIONVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void _OnItemPlayFinished(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnOptionClick(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void _OnAllItemsPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void add_ItemPlayFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_ItemPlayFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OptionClicked(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_OPTIONCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionClicked(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_OPTIONCLICKED_OFFSET))(this, a1);
		}

		::System::Void add_AllItemsPlayed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::System::Void remove_AllItemsPlayed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnItemPlayFinished()
		{
			return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONITEMPLAYFINISHED_OFFSET))(this);
		}

		::System::Void set_OnItemPlayFinished(::Class_1_BF01A723AB4005C0<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnOptionClick()
		{
			return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONOPTIONCLICK_OFFSET))(this);
		}

		::System::Void set_OnOptionClick(::Class_1_BF01A723AB4005C0<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnAllItemsPlayed()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void set_OnAllItemsPlayed(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::System::Int32 get_MessageItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_MESSAGEITEMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_OPTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HistoryMessageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_HISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_HistoryMessageCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_HISTORYMESSAGECOUNT_OFFSET))(this, a1);
		}
	};
}

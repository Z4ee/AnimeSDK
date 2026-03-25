#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F921FE7B01E8EB;
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsMessageItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_CREATEITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A80030)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_CREATEOPTIONSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A801D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GETOPTIONMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x9A7FF90)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9A80420)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x9A803C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x9A803E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONMESSAGESEQUENCELIST_OFFSET UNITYSDK_OFFSET(0x9A80400)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SETMESSAGEID_OFFSET UNITYSDK_OFFSET(0x9A80370)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9A80430)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x9A803D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x9A803F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONMESSAGESEQUENCELIST_OFFSET UNITYSDK_OFFSET(0x9A80410)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7FEF0)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsMessageSequence_TypeDefinitionIndex = 61060;

	class LimaoNewsMessageSequence : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*>* _OptionMessageSequenceList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* _MessageList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* _OptionList_k__BackingField; // 0x20
		::System::UInt32 _MessageID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE__CTOR_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsMessageSequence* GetOptionMessageSequence(::System::Int32 index)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GETOPTIONMESSAGESEQUENCE_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsMessageItemViewModel*>* CreateItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsMessageItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_CREATEITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsMessageItemViewModel*>* CreateOptionsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsMessageItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_CREATEOPTIONSVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetMessageID(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SETMESSAGEID_OFFSET))(this, messageID);
		}

		::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* get_MessageList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGELIST_OFFSET))(this);
		}

		::System::Void set_MessageList(::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGELIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* get_OptionList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONLIST_OFFSET))(this);
		}

		::System::Void set_OptionList(::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_36F921FE7B01E8EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*>* get_OptionMessageSequenceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONMESSAGESEQUENCELIST_OFFSET))(this);
		}

		::System::Void set_OptionMessageSequenceList(::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONMESSAGESEQUENCELIST_OFFSET))(this, value);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGEID_OFFSET))(this, value);
		}
	};
}

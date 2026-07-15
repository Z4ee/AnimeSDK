#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2023A453A03A22A2;
namespace RPG::Client::LimaoNews { class LimaoNewsMessageItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_CREATEITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7804B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_CREATEOPTIONSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7806A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GETOPTIONMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1A780420)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x1A780940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x1A7808E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1A780900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONMESSAGESEQUENCELIST_OFFSET UNITYSDK_OFFSET(0x1A780920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SETMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1A780890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x1A780950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x1A7808F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1A780910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONMESSAGESEQUENCELIST_OFFSET UNITYSDK_OFFSET(0x1A780930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A780380)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMessageSequence_TypeDefinitionIndex = 75416;

	class LimaoNewsMessageSequence : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* _MessageList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageSequence*>* _OptionMessageSequenceList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* _OptionList_k__BackingField; // 0x20
		::System::UInt32 _MessageID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE__CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* GetOptionMessageSequence(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageSequence*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GETOPTIONMESSAGESEQUENCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* CreateItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_CREATEITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* CreateOptionsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_CREATEOPTIONSVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetMessageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SETMESSAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* get_MessageList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGELIST_OFFSET))(this);
		}

		::System::Void set_MessageList(::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* get_OptionList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONLIST_OFFSET))(this);
		}

		::System::Void set_OptionList(::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2023A453A03A22A2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageSequence*>* get_OptionMessageSequenceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageSequence*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_OPTIONMESSAGESEQUENCELIST_OFFSET))(this);
		}

		::System::Void set_OptionMessageSequenceList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageSequence*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageSequence*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_OPTIONMESSAGESEQUENCELIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESEQUENCE_SET_MESSAGEID_OFFSET))(this, a1);
		}
	};
}

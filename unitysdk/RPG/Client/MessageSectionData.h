#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageItemData; }
namespace RPG::GameCore { class MessageSectionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0xBFE1F70)
#define RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFD9E40)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0xBFDADB0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0xBFE6FD0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET UNITYSDK_OFFSET(0xBFDE9F0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBFE6FF0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET UNITYSDK_OFFSET(0xBFE6950)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0xBFE6E60)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xBFDE6C0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFE6E40)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0xBFDDAD0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0xBFE6FA0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFD4580)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET UNITYSDK_OFFSET(0xBFDB7A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET UNITYSDK_OFFSET(0xBFDA630)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET UNITYSDK_OFFSET(0xBFDA830)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET UNITYSDK_OFFSET(0xBFE1A80)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET UNITYSDK_OFFSET(0xBFE6E80)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET UNITYSDK_OFFSET(0xBFDAAC0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0xBFDBA80)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0xBFE7010)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBFE6FB0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0xBFDB4E0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xBFDAC50)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xBFE6E20)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET UNITYSDK_OFFSET(0xBFE6F20)
#define RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET UNITYSDK_OFFSET(0xBFE17D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0xBFE6FE0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBFE7000)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0xBFE6E70)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFE6E50)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xBFE6FC0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xBFE6E30)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET UNITYSDK_OFFSET(0xBFE1B50)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFE1920)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xBFDA290)
#define RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE67E0)
#define RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET UNITYSDK_OFFSET(0xBFE6D20)
#define RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET UNITYSDK_OFFSET(0xBFE6C00)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET UNITYSDK_OFFSET(0xBFE6820)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET UNITYSDK_OFFSET(0xBFE69B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageSectionData_TypeDefinitionIndex = 61776;

	class MessageSectionData : public ::System::Object
	{
	public:
		::RPG::GameCore::MessageSectionRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _HistoryItems_k__BackingField; // 0x18
		::Enum_3_DB663931210BBC27_28 _Status_k__BackingField; // 0x20
		::System::UInt32 _ContactID_k__BackingField; // 0x24
		::System::UInt32 _LastFinishedItemID; // 0x28
		::System::UInt32 _GroupID_k__BackingField; // 0x2C
		::System::Boolean _InPerformance_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MessageSectionData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 UpdateHistory(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET))(this, a1);
		}

		::System::Void SetLastFinishedItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET))(this, a1);
		}

		::System::Boolean UpdateStatus(::Enum_3_DB663931210BBC27_28 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean UpdatePerformance(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _TryFinishLastItem(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET))(this, a1);
		}

		::System::Boolean _TryRecordItem(::Il2CppArray<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldRecordItem(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordItem(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_28 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_28 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_InPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_InPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_HistoryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET))(this);
		}

		::System::Void set_HistoryItems(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::MessageItemData* get_FirstItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET))(this);
		}

		::RPG::Client::MessageItemData* get_LatestItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInContact()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_ShowBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET))(this);
		}

		::System::Boolean get_CanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET))(this);
		}

		::System::Boolean get_HasUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET))(this);
		}

		::RPG::GameCore::MessageSectionRow* get_Row()
		{
			return ((::RPG::GameCore::MessageSectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageSectionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::String* get_Preview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_WaitingItemIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET))(this);
		}
	};
}

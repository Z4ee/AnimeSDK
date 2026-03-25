#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_27.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageItemData; }
namespace RPG::GameCore { class MessageSectionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x9B9BA00)
#define RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B932D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0x9B94490)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x9BA09A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET UNITYSDK_OFFSET(0x9B98480)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9BA09C0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET UNITYSDK_OFFSET(0x9BA02C0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x9BA0770)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B98140)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BA0750)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x9B971B0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x9BA0970)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9B8EED0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET UNITYSDK_OFFSET(0x9B94EE0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET UNITYSDK_OFFSET(0x9B93B50)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET UNITYSDK_OFFSET(0x9B93D90)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET UNITYSDK_OFFSET(0x9B9B3E0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET UNITYSDK_OFFSET(0x9BA0790)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET UNITYSDK_OFFSET(0x9B940A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x9B95120)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x9BA09E0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9BA0980)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0x9B94A90)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9B941D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9BA0730)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET UNITYSDK_OFFSET(0x9BA0830)
#define RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET UNITYSDK_OFFSET(0x9B9B160)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x9BA09B0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9BA09D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x9BA0780)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BA0760)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9BA0990)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9BA0740)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET UNITYSDK_OFFSET(0x9B9B5E0)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9B9B2B0)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9B937C0)
#define RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BA00E0)
#define RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET UNITYSDK_OFFSET(0x9BA0690)
#define RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET UNITYSDK_OFFSET(0x9BA05E0)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET UNITYSDK_OFFSET(0x9BA0120)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET UNITYSDK_OFFSET(0x9BA0320)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageSectionData_TypeDefinitionIndex = 53698;

	class MessageSectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _HistoryItems_k__BackingField; // 0x10
		::RPG::GameCore::MessageSectionRow* _Row_k__BackingField; // 0x18
		::System::Boolean _InPerformance_k__BackingField; // 0x20
		::Enum_3_DB663931210BBC27_27 _Status_k__BackingField; // 0x24
		::System::UInt32 _ContactID_k__BackingField; // 0x28
		::System::UInt32 _LastFinishedItemID; // 0x2C
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MessageSectionData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 UpdateHistory(::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET))(this, doneItemIDs);
		}

		::System::Void SetLastFinishedItem(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET))(this, itemID);
		}

		::System::Boolean UpdateStatus(::Enum_3_DB663931210BBC27_27 status)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET))(this, status);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean UpdatePerformance(::System::Boolean shouldInPerformance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET))(this, shouldInPerformance);
		}

		::System::Void _TryFinishLastItem(::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET))(this, doneItemIDs);
		}

		::System::Boolean _TryRecordItem(::Il2CppArray<::System::UInt32>* itemIDs, ::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET))(this, itemIDs, doneItemIDs);
		}

		::System::Boolean _ShouldRecordItem(::System::UInt32 itemID, ::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET))(this, itemID, doneItemIDs);
		}

		::System::Void _RecordItem(::System::UInt32 itemID, ::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET))(this, itemID, isFinished);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_27 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_27(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_27 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_InPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_InPerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_HistoryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET))(this);
		}

		::System::Void set_HistoryItems(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET))(this, value);
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

		::System::Void set_Row(::RPG::GameCore::MessageSectionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET))(this, value);
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

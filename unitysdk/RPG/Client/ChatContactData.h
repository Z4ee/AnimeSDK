#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ContactIdentity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x930EA60)
#define RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x930ED00)
#define RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0x930F450)
#define RPG_CLIENT_CHATCONTACTDATA_GET_EARLIESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x930F680)
#define RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x930F640)
#define RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x930F580)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x930F660)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x930F5E0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0x930F5A0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x930F5C0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_LATESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x930F750)
#define RPG_CLIENT_CHATCONTACTDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x930F830)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET UNITYSDK_OFFSET(0x930F3F0)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET UNITYSDK_OFFSET(0x930F350)
#define RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x930EBC0)
#define RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x930F240)
#define RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x930F650)
#define RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x930F590)
#define RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x930F670)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x930ED80)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x930F1F0)
#define RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x930F890)
#define RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET UNITYSDK_OFFSET(0x930EE10)
#define RPG_CLIENT_CHATCONTACTDATA__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x930F310)
#define RPG_CLIENT_CHATCONTACTDATA__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x930F2C0)
#define RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x930F140)
#define RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x930EB10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactData_TypeDefinitionIndex = 51301;

	class ChatContactData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _HistoryMessages; // 0x10
		::RPG::Client::ContactIdentity* _Identity_k__BackingField; // 0x18
		::System::UInt32 _SyncedTimeStamp; // 0x20
		::System::Boolean _HistoryInitialized_k__BackingField; // 0x24
		::System::Boolean _IsAllHistoryInLocal_k__BackingField; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET))(this);
		}

		::System::Void AppendMessage(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET))(this, messageData);
		}

		::System::Void RemoveMessage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET))(this, index);
		}

		::System::Void ClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET))(this);
		}

		::System::Void SyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* messages, ::System::UInt32 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET))(this, messages, page);
		}

		::System::Void SyncTime(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET))(this, timeStamp);
		}

		::System::Void SendTextMessage(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET))(this, text);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* messages, ::System::UInt32 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__ONSYNCHISTORY_OFFSET))(this, messages, page);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Boolean IsSameContact(::System::UInt32 id, ::RPG::Client::ContactRole role)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET))(this, id, role);
		}

		::System::Boolean IsSameContact_1(::RPG::Client::ChatContactData* contactData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET))(this, contactData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetHistoryMessage()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET))(this);
		}

		::System::Void _UpdateLastMessageStatus(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET))(this, messageData);
		}

		::System::Void _RefreshLastMessageStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _MergeMessages(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* baseMessages, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* toAddMessages)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET))(this, baseMessages, toAddMessages);
		}

		::RPG::Client::ContactIdentity* get_Identity()
		{
			return ((::RPG::Client::ContactIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::RPG::Client::ContactIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_HistoryInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void set_HistoryInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllHistoryInLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET))(this);
		}

		::System::Void set_IsAllHistoryInLocal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET))(this, value);
		}

		::RPG::Client::ChatMessageData* get_EarliestMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_EARLIESTMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* get_LatestMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_LATESTMESSAGE_OFFSET))(this);
		}

		::System::UInt32 get_TimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_TIMESTAMP_OFFSET))(this);
		}
	};
}

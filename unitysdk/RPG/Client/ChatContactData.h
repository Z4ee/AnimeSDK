#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ContactIdentity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92AA80)
#define RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B92AD80)
#define RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92B650)
#define RPG_CLIENT_CHATCONTACTDATA_GET_EARLIESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92B9B0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B92B970)
#define RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1B92B7A0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x1B92B990)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B92B910)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1B92B8A0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0x1B92B7C0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1B92B830)
#define RPG_CLIENT_CHATCONTACTDATA_GET_LATESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92BA70)
#define RPG_CLIENT_CHATCONTACTDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B92BB40)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET UNITYSDK_OFFSET(0x1B92B5F0)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET UNITYSDK_OFFSET(0x1B92B550)
#define RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92AC30)
#define RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B92B3E0)
#define RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B92B980)
#define RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1B92B7B0)
#define RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x1B92B9A0)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x1B92AE60)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x1B92B390)
#define RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92BBA0)
#define RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B92AF50)
#define RPG_CLIENT_CHATCONTACTDATA__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B92B510)
#define RPG_CLIENT_CHATCONTACTDATA__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x1B92B4C0)
#define RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x1B92B2F0)
#define RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x1B92AB90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactData_TypeDefinitionIndex = 63279;

	class ChatContactData : public ::System::Object
	{
	public:
		::RPG::Client::ContactIdentity* _Identity_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _HistoryMessages; // 0x18
		::System::Boolean _IsAllHistoryInLocal_k__BackingField; // 0x20
		::System::Boolean _HistoryInitialized_k__BackingField; // 0x21
		::System::UInt32 _SyncedTimeStamp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET))(this);
		}

		::System::Void AppendMessage(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void RemoveMessage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void ClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET))(this);
		}

		::System::Void SyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void SyncTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET))(this, a1);
		}

		::System::Void SendTextMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__ONSYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Boolean IsSameContact(::System::UInt32 a1, ::RPG::Client::ContactRole a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsSameContact_1(::RPG::Client::ChatContactData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetHistoryMessage()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET))(this);
		}

		::System::Void _UpdateLastMessageStatus(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshLastMessageStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _MergeMessages(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ContactIdentity* get_Identity()
		{
			return ((::RPG::Client::ContactIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::RPG::Client::ContactIdentity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_HistoryInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void set_HistoryInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllHistoryInLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET))(this);
		}

		::System::Void set_IsAllHistoryInLocal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET))(this, a1);
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

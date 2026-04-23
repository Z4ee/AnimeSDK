#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F7AB50)
#define RPG_CLIENT_CHATCONTACTFRIEND_MARKHISTORYDIRTY_OFFSET UNITYSDK_OFFSET(0x9F7B220)
#define RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7ADA0)
#define RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x9F7AC30)
#define RPG_CLIENT_CHATCONTACTFRIEND__CANMERGEDIRTYHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7B0F0)
#define RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7AAA0)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7B1B0)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7AF20)
#define RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7B310)
#define RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7B2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactFriend_TypeDefinitionIndex = 58226;

	class ChatContactFriend : public ::RPG::Client::ChatContactData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _DirtyHistoryMessages; // 0x28

		::System::Void _ctor(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET))(this, uid);
		}

		static ::RPG::Client::ChatContactFriend* Create(::System::UInt32 uid)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET))(uid);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET))(this, blockType, data);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET))(this);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* messages, ::System::UInt32 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__ONSYNCHISTORY_OFFSET))(this, messages, page);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Void MarkHistoryDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_MARKHISTORYDIRTY_OFFSET))(this);
		}

		::System::Boolean _CanMergeDirtyHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__CANMERGEDIRTYHISTORY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* P0, ::System::UInt32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy__OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET))(this);
		}
	};
}

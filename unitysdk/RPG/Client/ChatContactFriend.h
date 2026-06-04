#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET UNITYSDK_OFFSET(0xB5940D0)
#define RPG_CLIENT_CHATCONTACTFRIEND_MARKHISTORYDIRTY_OFFSET UNITYSDK_OFFSET(0xB5947A0)
#define RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0xB594320)
#define RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xB5941B0)
#define RPG_CLIENT_CHATCONTACTFRIEND__CANMERGEDIRTYHISTORY_OFFSET UNITYSDK_OFFSET(0xB594670)
#define RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET UNITYSDK_OFFSET(0xB594030)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0xB594730)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xB5944A0)
#define RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0xB594890)
#define RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xB594840)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactFriend_TypeDefinitionIndex = 59156;

	class ChatContactFriend : public ::RPG::Client::ChatContactData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _DirtyHistoryMessages; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChatContactFriend* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET))(a1);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET))(this);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__ONSYNCHISTORY_OFFSET))(this, a1, a2);
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

		::System::Void __iFixBaseProxy__OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy__OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET UNITYSDK_OFFSET(0xCAD8A40)
#define RPG_CLIENT_CHATCONTACTFRIEND_MARKHISTORYDIRTY_OFFSET UNITYSDK_OFFSET(0xCAD91D0)
#define RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0xCAD8C90)
#define RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xCAD8B20)
#define RPG_CLIENT_CHATCONTACTFRIEND__CANMERGEDIRTYHISTORY_OFFSET UNITYSDK_OFFSET(0xCAD90A0)
#define RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD89A0)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0xCAD9160)
#define RPG_CLIENT_CHATCONTACTFRIEND__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xCAD8ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactFriend_TypeDefinitionIndex = 63280;

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
	};
}

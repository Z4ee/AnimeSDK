#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_CREATE_OFFSET UNITYSDK_OFFSET(0xB594970)
#define RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xB594C10)
#define RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0xB594BD0)
#define RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xB594A30)
#define RPG_CLIENT_CHATCONTACTONLINEPLAYROOM__CTOR_OFFSET UNITYSDK_OFFSET(0xB5948D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactOnlinePlayRoom_TypeDefinitionIndex = 59157;

	class ChatContactOnlinePlayRoom : public ::RPG::Client::ChatContactData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTONLINEPLAYROOM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChatContactOnlinePlayRoom* Create()
		{
			return ((::RPG::Client::ChatContactOnlinePlayRoom*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_CREATE_OFFSET))();
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_REQUESTHISTORY_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTONLINEPLAYROOM_GET_HEADICON_OFFSET))(this);
		}
	};
}

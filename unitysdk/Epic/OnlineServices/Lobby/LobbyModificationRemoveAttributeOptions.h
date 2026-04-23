#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8EB88B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x8EB88C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB88D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationRemoveAttributeOptions_TypeDefinitionIndex = 41908;

	class LobbyModificationRemoveAttributeOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET))(this, value);
		}
	};
}

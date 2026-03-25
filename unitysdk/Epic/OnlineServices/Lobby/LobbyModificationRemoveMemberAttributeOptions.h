#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x86853C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x86853D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86853E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationRemoveMemberAttributeOptions_TypeDefinitionIndex = 36084;

	class LobbyModificationRemoveMemberAttributeOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONS_SET_KEY_OFFSET))(this, value);
		}
	};
}

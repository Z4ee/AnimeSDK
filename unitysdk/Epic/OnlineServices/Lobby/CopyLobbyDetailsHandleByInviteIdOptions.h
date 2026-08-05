#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1E5D3200)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1E5D3210)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D3220)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleByInviteIdOptions_TypeDefinitionIndex = 36272;

	class CopyLobbyDetailsHandleByInviteIdOptions : public ::System::Object
	{
	public:
		::System::String* _InviteId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONS_SET_INVITEID_OFFSET))(this, value);
		}
	};
}

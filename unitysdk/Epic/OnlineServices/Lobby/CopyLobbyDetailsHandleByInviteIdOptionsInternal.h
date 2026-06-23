#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class CopyLobbyDetailsHandleByInviteIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A3DE0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A3CC0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x9A3B40)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9A3BF0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleByInviteIdOptionsInternal_TypeDefinitionIndex = 35614;

	struct alignas(8) CopyLobbyDetailsHandleByInviteIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_InviteId; // 0x18

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

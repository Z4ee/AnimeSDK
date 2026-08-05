#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class KickMemberOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EE580)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9EE510)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x9EE2D0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9EE380)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9EE500)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x9EE440)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int KickMemberOptionsInternal_TypeDefinitionIndex = 36305;

	struct alignas(8) KickMemberOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_TargetUserId; // 0x28

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::KickMemberOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class RejectInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x898C30)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x898BC0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x898A40)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x898AF0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x898BB0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteOptionsInternal_TypeDefinitionIndex = 34212;

	struct alignas(8) RejectInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_InviteId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::RejectInviteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

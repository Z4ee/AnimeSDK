#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class RejectInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A6B380)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A6B300)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x3A6B180)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A6B230)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A6B2F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteOptionsInternal_TypeDefinitionIndex = 43657;

	struct alignas(8) RejectInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_InviteId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_InviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::RejectInviteOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

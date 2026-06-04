#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class GetInviteCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4D940)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4D930)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x4D7A0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4D860)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int GetInviteCountOptionsInternal_TypeDefinitionIndex = 42651;

	struct alignas(8) GetInviteCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::GetInviteCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

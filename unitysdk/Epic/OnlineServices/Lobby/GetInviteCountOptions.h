#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2E39E0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2E39F0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E3A00)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int GetInviteCountOptions_TypeDefinitionIndex = 42650;

	class GetInviteCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}

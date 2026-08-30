#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB386E00)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB386DE0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB386E10)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB386DF0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB386E20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int GetInviteIdByIndexOptions_TypeDefinitionIndex = 45695;

	class GetInviteIdByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITEIDBYINDEXOPTIONS_SET_INDEX_OFFSET))(this, a1);
		}
	};
}

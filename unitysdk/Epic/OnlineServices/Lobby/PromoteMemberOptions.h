#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB39E710)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB39E730)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xB39E750)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB39E720)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB39E740)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xB39E760)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB39E770)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int PromoteMemberOptions_TypeDefinitionIndex = 45828;

	class PromoteMemberOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}

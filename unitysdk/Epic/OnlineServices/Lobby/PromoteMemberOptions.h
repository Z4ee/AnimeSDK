#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1BFAE750)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFAE770)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1BFAE790)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1BFAE760)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFAE780)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1BFAE7A0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAE7B0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int PromoteMemberOptions_TypeDefinitionIndex = 35764;

	class PromoteMemberOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBEROPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}

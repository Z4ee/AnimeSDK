#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class IsRTCRoomConnectedOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3ABA7A0)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3ABA720)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x3ABA5A0)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3ABA650)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3ABA710)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int IsRTCRoomConnectedOptionsInternal_TypeDefinitionIndex = 43518;

	struct alignas(8) IsRTCRoomConnectedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

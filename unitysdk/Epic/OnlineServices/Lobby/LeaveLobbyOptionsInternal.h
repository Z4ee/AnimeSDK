#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LeaveLobbyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C08E0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C0870)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x9C07B0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9C06F0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9C0860)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LeaveLobbyOptionsInternal_TypeDefinitionIndex = 36309;

	struct alignas(8) LeaveLobbyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_LobbyId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LeaveLobbyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LeaveLobbyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

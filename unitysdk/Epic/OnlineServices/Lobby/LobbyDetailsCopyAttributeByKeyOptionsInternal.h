#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyAttributeByKeyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4B310)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4B1F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x4B070)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4B120)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyAttributeByKeyOptionsInternal_TypeDefinitionIndex = 41874;

	struct alignas(8) LobbyDetailsCopyAttributeByKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AttrKey; // 0x18

		::System::Void set_AttrKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_ATTRKEY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

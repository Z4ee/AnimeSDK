#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B1F40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B18C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyInfoOptionsInternal_TypeDefinitionIndex = 35658;

	struct alignas(4) LobbyDetailsCopyInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

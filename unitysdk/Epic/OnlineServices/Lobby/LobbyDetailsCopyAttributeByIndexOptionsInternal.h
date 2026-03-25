#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyAttributeByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4A600)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyAttributeByIndexOptionsInternal_TypeDefinitionIndex = 36046;

	struct alignas(4) LobbyDetailsCopyAttributeByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_AttrIndex; // 0x14

		::System::Void set_AttrIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_ATTRINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

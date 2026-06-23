#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyModificationSetBucketIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97B260)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x97B140)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x97AFC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x97B070)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetBucketIdOptionsInternal_TypeDefinitionIndex = 35695;

	struct alignas(8) LobbyModificationSetBucketIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_BucketId; // 0x18

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

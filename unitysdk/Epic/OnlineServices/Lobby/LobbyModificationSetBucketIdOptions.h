#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x8685740)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x8685750)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8685760)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetBucketIdOptions_TypeDefinitionIndex = 36086;

	class LobbyModificationSetBucketIdOptions : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETBUCKETIDOPTIONS_SET_BUCKETID_OFFSET))(this, value);
		}
	};
}

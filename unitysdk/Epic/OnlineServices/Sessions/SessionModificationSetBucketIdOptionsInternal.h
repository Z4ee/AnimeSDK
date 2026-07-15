#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetBucketIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A924F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A924E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x3A92360)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A92410)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetBucketIdOptionsInternal_TypeDefinitionIndex = 43013;

	struct alignas(8) SessionModificationSetBucketIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_BucketId; // 0x18

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

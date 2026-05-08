#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1AE34280)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1AE34290)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE342A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetBucketIdOptions_TypeDefinitionIndex = 33567;

	class SessionModificationSetBucketIdOptions : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETBUCKETIDOPTIONS_SET_BUCKETID_OFFSET))(this, value);
		}
	};
}

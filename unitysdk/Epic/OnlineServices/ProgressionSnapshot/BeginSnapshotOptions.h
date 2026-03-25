#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D9370)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D9380)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86D9390)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int BeginSnapshotOptions_TypeDefinitionIndex = 35733;

	class BeginSnapshotOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}

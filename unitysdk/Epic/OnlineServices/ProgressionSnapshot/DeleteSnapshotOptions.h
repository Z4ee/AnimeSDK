#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC5B9F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC5BA00)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5BA10)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int DeleteSnapshotOptions_TypeDefinitionIndex = 35345;

	class DeleteSnapshotOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}

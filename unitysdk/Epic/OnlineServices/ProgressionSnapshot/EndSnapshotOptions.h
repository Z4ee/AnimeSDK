#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS_GET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x1E5D7D30)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x1E5D7D40)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7D50)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int EndSnapshotOptions_TypeDefinitionIndex = 36006;

	class EndSnapshotOptions : public ::System::Object
	{
	public:
		::System::UInt32 _SnapshotId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SnapshotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS_GET_SNAPSHOTID_OFFSET))(this);
		}

		::System::Void set_SnapshotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONS_SET_SNAPSHOTID_OFFSET))(this, value);
		}
	};
}

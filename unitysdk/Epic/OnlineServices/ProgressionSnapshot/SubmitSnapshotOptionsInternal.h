#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class SubmitSnapshotOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6B2F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x21F0)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int SubmitSnapshotOptionsInternal_TypeDefinitionIndex = 42378;

	struct alignas(4) SubmitSnapshotOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SnapshotId; // 0x14

		::System::Void set_SnapshotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

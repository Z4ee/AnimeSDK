#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::ProgressionSnapshot { class DeleteSnapshotOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F1260)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F1130)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9F0FA0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F1060)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int DeleteSnapshotOptionsInternal_TypeDefinitionIndex = 36005;

	struct alignas(8) DeleteSnapshotOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

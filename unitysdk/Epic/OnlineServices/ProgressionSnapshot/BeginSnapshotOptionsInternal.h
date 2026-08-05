#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::ProgressionSnapshot { class BeginSnapshotOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x973520)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9733F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x973260)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x973320)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int BeginSnapshotOptionsInternal_TypeDefinitionIndex = 36001;

	struct alignas(8) BeginSnapshotOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_BEGINSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

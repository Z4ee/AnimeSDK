#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class AddProgressionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x913C40)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x913BD0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x913A60)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x913BC0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x913B10)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int AddProgressionOptionsInternal_TypeDefinitionIndex = 33777;

	struct alignas(8) AddProgressionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SnapshotId; // 0x14
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::Void set_SnapshotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET))(this, value);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

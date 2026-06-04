#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class AddProgressionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6A640)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6A5C0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x6A450)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6A5B0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x21F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x6A500)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int AddProgressionOptionsInternal_TypeDefinitionIndex = 42361;

	struct alignas(8) AddProgressionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SnapshotId; // 0x14
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::Void set_SnapshotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET))(this, a1);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}

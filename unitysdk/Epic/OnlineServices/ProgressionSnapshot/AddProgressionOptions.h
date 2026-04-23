#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8F0C6C0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x8F0C6A0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F0C6E0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x8F0C6D0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x8F0C6B0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F0C6F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0C700)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int AddProgressionOptions_TypeDefinitionIndex = 41557;

	class AddProgressionOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18
		::System::UInt32 _SnapshotId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SnapshotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_SNAPSHOTID_OFFSET))(this);
		}

		::System::Void set_SnapshotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_SNAPSHOTID_OFFSET))(this, value);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_KEY_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ADDPROGRESSIONOPTIONS_SET_VALUE_OFFSET))(this, value);
		}
	};
}

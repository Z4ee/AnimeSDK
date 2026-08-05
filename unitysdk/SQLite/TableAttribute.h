#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SQLITE_TABLEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA0C8F0)
#define SQLITE_TABLEATTRIBUTE_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1EA0C910)
#define SQLITE_TABLEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA0C900)
#define SQLITE_TABLEATTRIBUTE_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1EA0C920)
#define SQLITE_TABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C930)

namespace SQLite
{
	inline static constexpr unsigned int TableAttribute_TypeDefinitionIndex = 39040;

	class TableAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _WithoutRowId_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_WithoutRowId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_GET_WITHOUTROWID_OFFSET))(this);
		}

		::System::Void set_WithoutRowId(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_SET_WITHOUTROWID_OFFSET))(this, value);
		}
	};
}

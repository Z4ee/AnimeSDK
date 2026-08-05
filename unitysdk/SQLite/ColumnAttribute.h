#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SQLITE_COLUMNATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E9FA590)
#define SQLITE_COLUMNATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E9FA5A0)
#define SQLITE_COLUMNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA5B0)

namespace SQLite
{
	inline static constexpr unsigned int ColumnAttribute_TypeDefinitionIndex = 39041;

	class ColumnAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}
	};
}

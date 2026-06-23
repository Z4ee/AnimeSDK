#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SQLITE_COLLATIONATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D6325A0)
#define SQLITE_COLLATIONATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D6325B0)
#define SQLITE_COLLATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6325C0)

namespace SQLite
{
	inline static constexpr unsigned int CollationAttribute_TypeDefinitionIndex = 38388;

	class CollationAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Value_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* collation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE__CTOR_OFFSET))(this, collation);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}
	};
}

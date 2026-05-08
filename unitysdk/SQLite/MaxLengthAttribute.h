#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_MAXLENGTHATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B277040)
#define SQLITE_MAXLENGTHATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B277050)
#define SQLITE_MAXLENGTHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B277060)

namespace SQLite
{
	inline static constexpr unsigned int MaxLengthAttribute_TypeDefinitionIndex = 36776;

	class MaxLengthAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _Value_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE__CTOR_OFFSET))(this, length);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}
	};
}

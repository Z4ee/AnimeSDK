#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SQLITE_FALLBACKVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D633120)
#define SQLITE_FALLBACKVALUEATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D633130)
#define SQLITE_FALLBACKVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633140)

namespace SQLite
{
	inline static constexpr unsigned int FallbackValueAttribute_TypeDefinitionIndex = 38390;

	class FallbackValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_FALLBACKVALUEATTRIBUTE__CTOR_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FALLBACKVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_FALLBACKVALUEATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}
	};
}

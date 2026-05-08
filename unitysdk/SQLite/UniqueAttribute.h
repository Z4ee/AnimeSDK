#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/IndexedAttribute.h"

#define SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1B289D50)
#define SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1B289D60)
#define SQLITE_UNIQUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B289D70)

namespace SQLite
{
	inline static constexpr unsigned int UniqueAttribute_TypeDefinitionIndex = 36775;

	class UniqueAttribute : public ::SQLite::IndexedAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Unique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET))(this);
		}

		::System::Void set_Unique(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/IndexedAttribute.h"

#define SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1EA0DF30)
#define SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1EA0DF40)
#define SQLITE_UNIQUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0DF50)

namespace SQLite
{
	inline static constexpr unsigned int UniqueAttribute_TypeDefinitionIndex = 39046;

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

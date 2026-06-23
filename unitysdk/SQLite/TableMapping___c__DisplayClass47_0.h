#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }
namespace System { class String; }

#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D645850)
#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS47_0__FINDCOLUMNWITHPROPERTYNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1D645BF0)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping___c__DisplayClass47_0_TypeDefinitionIndex = 38398;

	class TableMapping___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* propertyName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindColumnWithPropertyName_b__0(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS47_0__FINDCOLUMNWITHPROPERTYNAME_B__0_OFFSET))(this, c);
		}
	};
}

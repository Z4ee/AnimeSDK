#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }
namespace System { class String; }

#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D7F0)
#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS48_0__FINDCOLUMN_B__0_OFFSET UNITYSDK_OFFSET(0x1EA0DB20)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping___c__DisplayClass48_0_TypeDefinitionIndex = 39060;

	class TableMapping___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::String* columnName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindColumn_b__0(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS48_0__FINDCOLUMN_B__0_OFFSET))(this, c);
		}
	};
}

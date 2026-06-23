#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection_IndexedColumn_TypeDefinitionIndex = 38367;

	struct alignas(8) SQLiteConnection_IndexedColumn
	{
		::System::Int32 Order; // 0x10
		::System::String* ColumnName; // 0x18
	};
}

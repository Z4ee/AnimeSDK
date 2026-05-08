#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteConnection_IndexedColumn.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection_IndexInfo_TypeDefinitionIndex = 36758;

	struct alignas(8) SQLiteConnection_IndexInfo
	{
		::System::String* IndexName; // 0x10
		::System::String* TableName; // 0x18
		::System::Boolean Unique; // 0x20
		::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_IndexedColumn>* Columns; // 0x28
	};
}

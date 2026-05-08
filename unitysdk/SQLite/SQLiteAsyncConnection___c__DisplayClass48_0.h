#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS48_0__CREATEINDEXASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27DA00)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27AA80)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass48_0_TypeDefinitionIndex = 36829;

	class SQLiteAsyncConnection___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* columnNames; // 0x10
		::System::String* tableName; // 0x18
		::System::String* indexName; // 0x20
		::System::Boolean unique; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateIndexAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS48_0__CREATEINDEXASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

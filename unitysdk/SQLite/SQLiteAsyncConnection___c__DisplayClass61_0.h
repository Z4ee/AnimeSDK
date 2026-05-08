#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27B1E0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS61_0__DELETEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27F6B0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass61_0_TypeDefinitionIndex = 36842;

	class SQLiteAsyncConnection___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Object* primaryKey; // 0x10
		::SQLite::TableMapping* map; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _DeleteAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS61_0__DELETEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

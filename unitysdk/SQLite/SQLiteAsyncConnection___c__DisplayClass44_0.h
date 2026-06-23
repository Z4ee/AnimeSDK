#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D636AC0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS44_0__DROPTABLEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D639850)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass44_0_TypeDefinitionIndex = 38435;

	class SQLiteAsyncConnection___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping* map; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _DropTableAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS44_0__DROPTABLEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

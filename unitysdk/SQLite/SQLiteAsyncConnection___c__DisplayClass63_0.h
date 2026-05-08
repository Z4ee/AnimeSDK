#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27B280)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS63_0__DELETEALLASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27F930)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass63_0_TypeDefinitionIndex = 36844;

	class SQLiteAsyncConnection___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping* map; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _DeleteAllAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS63_0__DELETEALLASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

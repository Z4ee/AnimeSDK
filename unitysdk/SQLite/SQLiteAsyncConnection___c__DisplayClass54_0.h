#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D637140)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS54_0__INSERTORREPLACEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D63A9F0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass54_0_TypeDefinitionIndex = 38445;

	class SQLiteAsyncConnection___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertOrReplaceAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS54_0__INSERTORREPLACEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

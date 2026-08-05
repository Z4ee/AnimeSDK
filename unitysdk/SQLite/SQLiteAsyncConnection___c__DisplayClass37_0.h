#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/SQLite/CreateTableResult.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS37_0__CREATETABLEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA005D0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FE840)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass37_0_TypeDefinitionIndex = 39093;

	class SQLiteAsyncConnection___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Type* ty; // 0x10
		::SQLite::CreateFlags createFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::SQLite::CreateTableResult _CreateTableAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::SQLite::CreateTableResult(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS37_0__CREATETABLEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FF360)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS59_0__DELETEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA035D0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass59_0_TypeDefinitionIndex = 39111;

	class SQLiteAsyncConnection___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::Object* objectToDelete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _DeleteAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS59_0__DELETEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

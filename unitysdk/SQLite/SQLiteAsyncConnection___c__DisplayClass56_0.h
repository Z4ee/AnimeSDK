#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27AF30)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS56_0__UPDATEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27E820)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass56_0_TypeDefinitionIndex = 36837;

	class SQLiteAsyncConnection___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS56_0__UPDATEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

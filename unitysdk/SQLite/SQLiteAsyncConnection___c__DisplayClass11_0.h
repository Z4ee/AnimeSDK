#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FDAB0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS11_0__SETBUSYTIMEOUTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA00360)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass11_0_TypeDefinitionIndex = 39086;

	class SQLiteAsyncConnection___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::TimeSpan value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Object* _SetBusyTimeoutAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS11_0__SETBUSYTIMEOUTASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

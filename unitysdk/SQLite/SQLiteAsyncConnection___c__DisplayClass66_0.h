#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27B3E0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS66_0__GETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27FD80)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass66_0_TypeDefinitionIndex = 36847;

	class SQLiteAsyncConnection___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping* map; // 0x10
		::System::Object* pk; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS66_0__GETASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

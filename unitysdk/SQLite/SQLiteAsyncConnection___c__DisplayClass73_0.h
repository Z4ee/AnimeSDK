#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D637960)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS73_0__GETMAPPINGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D63C660)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass73_0_TypeDefinitionIndex = 38464;

	class SQLiteAsyncConnection___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::SQLite::CreateFlags createFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::SQLite::TableMapping* _GetMappingAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::SQLite::TableMapping*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS73_0__GETMAPPINGASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

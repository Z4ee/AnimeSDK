#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6371F0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS55_0__INSERTORREPLACEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D63AAD0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass55_0_TypeDefinitionIndex = 38446;

	class SQLiteAsyncConnection___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10
		::System::Type* objType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertOrReplaceAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS55_0__INSERTORREPLACEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

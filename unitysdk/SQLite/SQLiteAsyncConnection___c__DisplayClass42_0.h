#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class CreateTablesResult; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS42_0__CREATETABLESASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA01540)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FE8F0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass42_0_TypeDefinitionIndex = 39094;

	class SQLiteAsyncConnection___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* types; // 0x10
		::SQLite::CreateFlags createFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::SQLite::CreateTablesResult* _CreateTablesAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::SQLite::CreateTablesResult*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS42_0__CREATETABLESASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

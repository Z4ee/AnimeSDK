#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS64_0__BACKUPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27FC00)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27B330)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass64_0_TypeDefinitionIndex = 36845;

	class SQLiteAsyncConnection___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::System::String* databaseName; // 0x10
		::System::String* destinationDatabasePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _BackupAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS64_0__BACKUPASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

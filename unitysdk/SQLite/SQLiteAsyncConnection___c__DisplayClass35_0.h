#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6368C0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS35_0__ENABLELOADEXTENSIONASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D638610)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass35_0_TypeDefinitionIndex = 38430;

	class SQLiteAsyncConnection___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Object* _EnableLoadExtensionAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS35_0__ENABLELOADEXTENSIONASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

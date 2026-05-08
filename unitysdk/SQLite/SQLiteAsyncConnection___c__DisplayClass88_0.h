#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BC70)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS88_0__REKEYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B281CD0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass88_0_TypeDefinitionIndex = 36868;

	class SQLiteAsyncConnection___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Object* _ReKeyAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS88_0__REKEYASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

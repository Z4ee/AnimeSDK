#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FF210)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS57_0__UPDATEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA02B50)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass57_0_TypeDefinitionIndex = 39109;

	class SQLiteAsyncConnection___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Type* objType; // 0x10
		::System::Object* obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS57_0__UPDATEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

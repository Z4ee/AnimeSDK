#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FEEB0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS52_0__INSERTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA02170)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass52_0_TypeDefinitionIndex = 39104;

	class SQLiteAsyncConnection___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10
		::System::String* extra; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS52_0__INSERTASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

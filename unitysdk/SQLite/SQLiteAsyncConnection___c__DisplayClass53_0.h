#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27AD40)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS53_0__INSERTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B27E070)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass53_0_TypeDefinitionIndex = 36834;

	class SQLiteAsyncConnection___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::String* extra; // 0x10
		::System::Object* obj; // 0x18
		::System::Type* objType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS53_0__INSERTASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D637CF0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS79_0__INSERTALLASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D63D6C0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass79_0_TypeDefinitionIndex = 38470;

	class SQLiteAsyncConnection___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerable* objects; // 0x10
		::System::Type* objType; // 0x18
		::System::Boolean runInTransaction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertAllAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS79_0__INSERTALLASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

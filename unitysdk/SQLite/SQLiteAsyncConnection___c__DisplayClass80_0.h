#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { template <typename T> class Action_1; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FFC70)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS80_0__RUNINTRANSACTIONASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA059A0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass80_0_TypeDefinitionIndex = 39132;

	class SQLiteAsyncConnection___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Action_1<::SQLite::SQLiteConnection*>* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RunInTransactionAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS80_0__RUNINTRANSACTIONASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

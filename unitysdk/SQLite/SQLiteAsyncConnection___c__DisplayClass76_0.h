#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FF990)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS76_0__EXECUTEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA04A70)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass76_0_TypeDefinitionIndex = 39128;

	class SQLiteAsyncConnection___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::String* query; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ExecuteAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS76_0__EXECUTEASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

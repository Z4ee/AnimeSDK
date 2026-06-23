#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }
namespace System { class String; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6378B0)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS72_0__FINDWITHQUERYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D63C490)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass72_0_TypeDefinitionIndex = 38463;

	class SQLiteAsyncConnection___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping* map; // 0x10
		::System::String* query; // 0x18
		::Il2CppArray<::System::Object*>* args; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Object* _FindWithQueryAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS72_0__FINDWITHQUERYASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

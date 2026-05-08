#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BB00)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS85_0__QUERYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B281A70)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass85_0_TypeDefinitionIndex = 36865;

	class SQLiteAsyncConnection___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::String* query; // 0x10
		::SQLite::TableMapping* map; // 0x18
		::Il2CppArray<::System::Object*>* args; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _QueryAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS85_0__QUERYASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

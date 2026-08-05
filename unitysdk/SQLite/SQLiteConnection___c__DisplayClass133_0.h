#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System::Collections { class IEnumerable; }

#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS133_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A6F0)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS133_0__UPDATEALL_B__0_OFFSET UNITYSDK_OFFSET(0x1EA0BB80)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection___c__DisplayClass133_0_TypeDefinitionIndex = 39036;

	class SQLiteConnection___c__DisplayClass133_0 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerable* objects; // 0x10
		::SQLite::SQLiteConnection* __4__this; // 0x18
		::System::Int32 c; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS133_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAll_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS133_0__UPDATEALL_B__0_OFFSET))(this);
		}
	};
}

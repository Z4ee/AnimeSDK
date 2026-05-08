#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS120_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B285620)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS120_0__INSERTALL_B__0_OFFSET UNITYSDK_OFFSET(0x1B2871F0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection___c__DisplayClass120_0_TypeDefinitionIndex = 36762;

	class SQLiteConnection___c__DisplayClass120_0 : public ::System::Object
	{
	public:
		::System::String* extra; // 0x10
		::System::Collections::IEnumerable* objects; // 0x18
		::SQLite::SQLiteConnection* __4__this; // 0x20
		::System::Int32 c; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS120_0__CTOR_OFFSET))(this);
		}

		::System::Void _InsertAll_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS120_0__INSERTALL_B__0_OFFSET))(this);
		}
	};
}

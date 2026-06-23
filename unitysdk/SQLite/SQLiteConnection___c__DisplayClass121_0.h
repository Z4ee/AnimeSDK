#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }

#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D641990)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS121_0__INSERTALL_B__0_OFFSET UNITYSDK_OFFSET(0x1D643910)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection___c__DisplayClass121_0_TypeDefinitionIndex = 38373;

	class SQLiteConnection___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::SQLite::SQLiteConnection* __4__this; // 0x10
		::System::Collections::IEnumerable* objects; // 0x18
		::System::Type* objType; // 0x20
		::System::Int32 c; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS121_0__CTOR_OFFSET))(this);
		}

		::System::Void _InsertAll_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS121_0__INSERTALL_B__0_OFFSET))(this);
		}
	};
}

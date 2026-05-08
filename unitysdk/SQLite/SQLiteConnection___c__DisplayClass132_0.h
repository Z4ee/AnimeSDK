#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }

#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2864D0)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B287920)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1B287930)
#define SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__2_OFFSET UNITYSDK_OFFSET(0x1B287960)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection___c__DisplayClass132_0_TypeDefinitionIndex = 36764;

	class SQLiteConnection___c__DisplayClass132_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping_Column* pk; // 0x10
		::System::Object* obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::SQLite::TableMapping_Column* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__0_OFFSET))(this, p);
		}

		::System::Object* _Update_b__1(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__1_OFFSET))(this, c);
		}

		::System::Object* _Update_b__2(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__DISPLAYCLASS132_0__UPDATE_B__2_OFFSET))(this, c);
		}
	};
}

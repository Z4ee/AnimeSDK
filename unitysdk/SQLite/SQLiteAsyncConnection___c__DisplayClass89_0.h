#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BD20)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS89_0__REKEYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B281E10)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass89_0_TypeDefinitionIndex = 36869;

	class SQLiteAsyncConnection___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Object* _ReKeyAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS89_0__REKEYASYNC_B__0_OFFSET))(this, conn);
		}
	};
}

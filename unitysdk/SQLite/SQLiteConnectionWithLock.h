#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteConnection.h"

namespace SQLite { class SQLiteConnectionString; }
namespace System { class IDisposable; }
namespace System { class Object; }

#define SQLITE_SQLITECONNECTIONWITHLOCK_GET_SKIPLOCK_OFFSET UNITYSDK_OFFSET(0x1B288350)
#define SQLITE_SQLITECONNECTIONWITHLOCK_LOCK_OFFSET UNITYSDK_OFFSET(0x1B288370)
#define SQLITE_SQLITECONNECTIONWITHLOCK_SET_SKIPLOCK_OFFSET UNITYSDK_OFFSET(0x1B288360)
#define SQLITE_SQLITECONNECTIONWITHLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B288120)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionWithLock_TypeDefinitionIndex = 36880;

	class SQLiteConnectionWithLock : public ::SQLite::SQLiteConnection
	{
	public:
		::System::Object* _lockPoint; // 0x78
		::System::Boolean _SkipLock_k__BackingField; // 0x80

		::System::Void _ctor(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK__CTOR_OFFSET))(this, connectionString);
		}

		::System::Boolean get_SkipLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_GET_SKIPLOCK_OFFSET))(this);
		}

		::System::Void set_SkipLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_SET_SKIPLOCK_OFFSET))(this, value);
		}

		::System::IDisposable* Lock()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_LOCK_OFFSET))(this);
		}
	};
}

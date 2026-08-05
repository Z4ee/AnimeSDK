#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnectionWithLock; }

#define SQLITE_SQLITECONNECTIONPOOL_ENTRY_CLOSE_OFFSET UNITYSDK_OFFSET(0x1EA0C120)
#define SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_CONNECTIONSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0C2F0)
#define SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1EA0C2D0)
#define SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_TRANSACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1EA0C300)
#define SQLITE_SQLITECONNECTIONPOOL_ENTRY_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1EA0C2E0)
#define SQLITE_SQLITECONNECTIONPOOL_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0BFF0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionPool_Entry_TypeDefinitionIndex = 39150;

	class SQLiteConnectionPool_Entry : public ::System::Object
	{
	public:
		::SQLite::SQLiteConnectionString* _ConnectionString_k__BackingField; // 0x10
		::System::Object* _TransactionLock_k__BackingField; // 0x18
		::SQLite::SQLiteConnectionWithLock* _Connection_k__BackingField; // 0x20

		::System::Void _ctor(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY__CTOR_OFFSET))(this, connectionString);
		}

		::SQLite::SQLiteConnectionWithLock* get_Connection()
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_CONNECTION_OFFSET))(this);
		}

		::System::Void set_Connection(::SQLite::SQLiteConnectionWithLock* value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY_SET_CONNECTION_OFFSET))(this, value);
		}

		::SQLite::SQLiteConnectionString* get_ConnectionString()
		{
			return ((::SQLite::SQLiteConnectionString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_CONNECTIONSTRING_OFFSET))(this);
		}

		::System::Object* get_TransactionLock()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY_GET_TRANSACTIONLOCK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_ENTRY_CLOSE_OFFSET))(this);
		}
	};
}

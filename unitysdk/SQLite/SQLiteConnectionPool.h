#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionPool_Entry; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SQLITE_SQLITECONNECTIONPOOL_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1B27BE00)
#define SQLITE_SQLITECONNECTIONPOOL_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1B27A0C0)
#define SQLITE_SQLITECONNECTIONPOOL_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1B279FC0)
#define SQLITE_SQLITECONNECTIONPOOL_GET_SHARED_OFFSET UNITYSDK_OFFSET(0x1B287DA0)
#define SQLITE_SQLITECONNECTIONPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1B279CA0)
#define SQLITE_SQLITECONNECTIONPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B288000)
#define SQLITE_SQLITECONNECTIONPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B287F60)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionPool_TypeDefinitionIndex = 36878;

	class SQLiteConnectionPool : public ::System::Object
	{
	public:
		static ::SQLite::SQLiteConnectionPool** StaticGet__shared()
		{
			return (::SQLite::SQLiteConnectionPool**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnectionPool_TypeDefinitionIndex)->GetStaticField(0x27390);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SQLite::SQLiteConnectionPool_Entry*>* _entries; // 0x10
		::System::Object* _entriesLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL__CCTOR_OFFSET))();
		}

		static ::SQLite::SQLiteConnectionPool* get_Shared()
		{
			return ((::SQLite::SQLiteConnectionPool*(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GET_SHARED_OFFSET))();
		}

		::SQLite::SQLiteConnectionWithLock* GetConnection(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GETCONNECTION_OFFSET))(this, connectionString);
		}

		::SQLite::SQLiteConnectionWithLock* GetConnectionAndTransactionLock(::SQLite::SQLiteConnectionString* connectionString, ::System::Object*& transactionLock)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::SQLite::SQLiteConnectionString*, ::System::Object*&))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET))(this, connectionString, transactionLock);
		}

		::System::Void CloseConnection(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_CLOSECONNECTION_OFFSET))(this, connectionString);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_RESET_OFFSET))(this);
		}
	};
}

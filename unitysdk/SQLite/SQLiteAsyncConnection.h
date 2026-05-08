#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/SQLite/CreateTableResult.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace SQLite { class CreateTablesResult; }
namespace SQLite { class SQLiteConnection; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class SQLiteConnection_ColumnInfo; }
namespace SQLite { class TableMapping; }
namespace SQLite { template <typename T> class AsyncTableQuery_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SQLITE_SQLITEASYNCCONNECTION_BACKUPASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B290)
#define SQLITE_SQLITEASYNCCONNECTION_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A300)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27A830)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1B27A900)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_3_OFFSET UNITYSDK_OFFSET(0x1B27A9C0)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A770)
#define SQLITE_SQLITEASYNCCONNECTION_CREATETABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A570)
#define SQLITE_SQLITEASYNCCONNECTION_CREATETABLESASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A620)
#define SQLITE_SQLITEASYNCCONNECTION_DEFERREDQUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1B27BB10)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEALLASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B1F0)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27B140)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B0A0)
#define SQLITE_SQLITEASYNCCONNECTION_DROPTABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A6D0)
#define SQLITE_SQLITEASYNCCONNECTION_ENABLELOADEXTENSIONASYNC_OFFSET UNITYSDK_OFFSET(0x1B27A4D0)
#define SQLITE_SQLITEASYNCCONNECTION_ENABLEWRITEAHEADLOGGINGASYNC_OFFSET UNITYSDK_OFFSET(0x1B279830)
#define SQLITE_SQLITEASYNCCONNECTION_EXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B6C0)
#define SQLITE_SQLITEASYNCCONNECTION_FINDASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B3F0)
#define SQLITE_SQLITEASYNCCONNECTION_FINDWITHQUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B4A0)
#define SQLITE_SQLITEASYNCCONNECTION_GETASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B340)
#define SQLITE_SQLITEASYNCCONNECTION_GETBUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B279760)
#define SQLITE_SQLITEASYNCCONNECTION_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1B279FE0)
#define SQLITE_SQLITEASYNCCONNECTION_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1B279650)
#define SQLITE_SQLITEASYNCCONNECTION_GETMAPPINGASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B560)
#define SQLITE_SQLITEASYNCCONNECTION_GETTABLEINFOASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B610)
#define SQLITE_SQLITEASYNCCONNECTION_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0x1B279630)
#define SQLITE_SQLITEASYNCCONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B279740)
#define SQLITE_SQLITEASYNCCONNECTION_GET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1B279720)
#define SQLITE_SQLITEASYNCCONNECTION_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0x1B279930)
#define SQLITE_SQLITEASYNCCONNECTION_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0x1B279950)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TABLEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1B279A40)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1B279A00)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TRACER_OFFSET UNITYSDK_OFFSET(0x1B2799B0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1B279970)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27B820)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_2_OFFSET UNITYSDK_OFFSET(0x1B27B8E0)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B770)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27AB30)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_2_OFFSET UNITYSDK_OFFSET(0x1B27ABE0)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_3_OFFSET UNITYSDK_OFFSET(0x1B27AC90)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_OFFSET UNITYSDK_OFFSET(0x1B27AA90)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27ADF0)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27AD50)
#define SQLITE_SQLITEASYNCCONNECTION_QUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1B27BA50)
#define SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27BC80)
#define SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_OFFSET UNITYSDK_OFFSET(0x1B27BBD0)
#define SQLITE_SQLITEASYNCCONNECTION_RESETPOOL_OFFSET UNITYSDK_OFFSET(0x1B279BE0)
#define SQLITE_SQLITEASYNCCONNECTION_RUNINTRANSACTIONASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B9A0)
#define SQLITE_SQLITEASYNCCONNECTION_SETBUSYTIMEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x1B279780)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1B279A20)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TRACER_OFFSET UNITYSDK_OFFSET(0x1B2799D0)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TRACE_OFFSET UNITYSDK_OFFSET(0x1B279990)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEALLASYNC_OFFSET UNITYSDK_OFFSET(0x1B27AFF0)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27AF40)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27AEA0)
#define SQLITE_SQLITEASYNCCONNECTION__CLOSEASYNC_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B27BD30)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2795A0)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B279590)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B279330)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection_TypeDefinitionIndex = 36814;

	class SQLiteAsyncConnection : public ::System::Object
	{
	public:
		::SQLite::SQLiteConnectionString* _connectionString; // 0x10

		::System::Void _ctor(::System::String* databasePath, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_OFFSET))(this, databasePath, storeDateTimeAsTicks);
		}

		::System::Void _ctor_1(::System::String* databasePath, ::SQLite::SQLiteOpenFlags openFlags, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_1_OFFSET))(this, databasePath, openFlags, storeDateTimeAsTicks);
		}

		::System::Void _ctor_2(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_2_OFFSET))(this, connectionString);
		}

		::System::String* get_DatabasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_DATABASEPATH_OFFSET))(this);
		}

		::System::Int32 get_LibVersionNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_LIBVERSIONNUMBER_OFFSET))(this);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET))(this);
		}

		::System::TimeSpan GetBusyTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETBUSYTIMEOUT_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* SetBusyTimeoutAsync(::System::TimeSpan value)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SETBUSYTIMEOUTASYNC_OFFSET))(this, value);
		}

		::System::Threading::Tasks::Task* EnableWriteAheadLoggingAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_ENABLEWRITEAHEADLOGGINGASYNC_OFFSET))(this);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_STOREDATETIMEASTICKS_OFFSET))(this);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_STORETIMESPANASTICKS_OFFSET))(this);
		}

		::System::Boolean get_Trace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TRACE_OFFSET))(this);
		}

		::System::Void set_Trace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TRACE_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_Tracer()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TRACER_OFFSET))(this);
		}

		::System::Void set_Tracer(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TRACER_OFFSET))(this, value);
		}

		::System::Boolean get_TimeExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TIMEEXECUTION_OFFSET))(this);
		}

		::System::Void set_TimeExecution(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TIMEEXECUTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>* get_TableMappings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TABLEMAPPINGS_OFFSET))(this);
		}

		static ::System::Void ResetPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_RESETPOOL_OFFSET))();
		}

		::SQLite::SQLiteConnectionWithLock* GetConnection()
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETCONNECTION_OFFSET))(this);
		}

		::SQLite::SQLiteConnectionWithLock* GetConnectionAndTransactionLock(::System::Object*& transactionLock)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET))(this, transactionLock);
		}

		::System::Threading::Tasks::Task* CloseAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CLOSEASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* EnableLoadExtensionAsync(::System::Boolean enabled)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_ENABLELOADEXTENSIONASYNC_OFFSET))(this, enabled);
		}

		::System::Threading::Tasks::Task_1<::SQLite::CreateTableResult>* CreateTableAsync(::System::Type* ty, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::CreateTableResult>*(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATETABLEASYNC_OFFSET))(this, ty, createFlags);
		}

		::System::Threading::Tasks::Task_1<::SQLite::CreateTablesResult*>* CreateTablesAsync(::SQLite::CreateFlags createFlags, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::CreateTablesResult*>*(*)(::PVOID, ::SQLite::CreateFlags, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATETABLESASYNC_OFFSET))(this, createFlags, types);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DropTableAsync(::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DROPTABLEASYNC_OFFSET))(this, map);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync(::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_OFFSET))(this, tableName, columnName, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_1(::System::String* indexName, ::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_1_OFFSET))(this, indexName, tableName, columnName, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_2(::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_2_OFFSET))(this, tableName, columnNames, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_3(::System::String* indexName, ::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_3_OFFSET))(this, indexName, tableName, columnNames, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_2(::System::Object* obj, ::System::String* extra)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_2_OFFSET))(this, obj, extra);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_3(::System::Object* obj, ::System::String* extra, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_3_OFFSET))(this, obj, extra, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertOrReplaceAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertOrReplaceAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAllAsync(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEALLASYNC_OFFSET))(this, objects, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAsync(::System::Object* objectToDelete)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_OFFSET))(this, objectToDelete);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAsync_1(::System::Object* primaryKey, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_1_OFFSET))(this, primaryKey, map);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAllAsync(::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEALLASYNC_OFFSET))(this, map);
		}

		::System::Threading::Tasks::Task* BackupAsync(::System::String* destinationDatabasePath, ::System::String* databaseName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_BACKUPASYNC_OFFSET))(this, destinationDatabasePath, databaseName);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* GetAsync(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETASYNC_OFFSET))(this, pk, map);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* FindAsync(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_FINDASYNC_OFFSET))(this, pk, map);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* FindWithQueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_FINDWITHQUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task_1<::SQLite::TableMapping*>* GetMappingAsync(::System::Type* type, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::TableMapping*>*(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETMAPPINGASYNC_OFFSET))(this, type, createFlags);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*>* GetTableInfoAsync(::System::String* tableName)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETTABLEINFOASYNC_OFFSET))(this, tableName);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ExecuteAsync(::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_EXECUTEASYNC_OFFSET))(this, query, args);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_OFFSET))(this, objects, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync_1(::System::Collections::IEnumerable* objects, ::System::String* extra, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_1_OFFSET))(this, objects, extra, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync_2(::System::Collections::IEnumerable* objects, ::System::Type* objType, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_2_OFFSET))(this, objects, objType, runInTransaction);
		}

		::System::Threading::Tasks::Task* RunInTransactionAsync(::System::Action_1<::SQLite::SQLiteConnection*>* action)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::SQLite::SQLiteConnection*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_RUNINTRANSACTIONASYNC_OFFSET))(this, action);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::Object*>*>* QueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_QUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* DeferredQueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DEFERREDQUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task* ReKeyAsync(::System::String* key)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_OFFSET))(this, key);
		}

		::System::Threading::Tasks::Task* ReKeyAsync_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_1_OFFSET))(this, key);
		}

		::System::Void _CloseAsync_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CLOSEASYNC_B__31_0_OFFSET))(this);
		}
	};
}

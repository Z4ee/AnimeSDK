#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/SQLite/CreateTableResult.h"
#include "unitysdk/SQLite/NotifyTableChangedAction.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace SQLite { class CreateTablesResult; }
namespace SQLite { class NotifyTableChangedEventArgs; }
namespace SQLite { class PreparedSqlLiteInsertCommand; }
namespace SQLite { class SQLiteCommand; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnection_ColumnInfo; }
namespace SQLite { class TableMapping; }
namespace SQLite { class TableMapping_Column; }
namespace SQLite { template <typename T> class TableQuery_1; }
namespace System { class Action; }
namespace System { class Random; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }

#define SQLITE_SQLITECONNECTION_ADD_TABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1D642E60)
#define SQLITE_SQLITECONNECTION_BACKUP_OFFSET UNITYSDK_OFFSET(0x1D63BFA0)
#define SQLITE_SQLITECONNECTION_BEGINTRANSACTION_OFFSET UNITYSDK_OFFSET(0x1D63DB90)
#define SQLITE_SQLITECONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D642970)
#define SQLITE_SQLITECONNECTION_COMMIT_OFFSET UNITYSDK_OFFSET(0x1D63DCD0)
#define SQLITE_SQLITECONNECTION_CREATECOMMAND_1_OFFSET UNITYSDK_OFFSET(0x1D640FE0)
#define SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D640EA0)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_1_OFFSET UNITYSDK_OFFSET(0x1D639B00)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_2_OFFSET UNITYSDK_OFFSET(0x1D6399A0)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_3_OFFSET UNITYSDK_OFFSET(0x1D639C80)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0x1D639DA0)
#define SQLITE_SQLITECONNECTION_CREATEINSERTCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D642240)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0x1D6396A0)
#define SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET UNITYSDK_OFFSET(0x1D638730)
#define SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET UNITYSDK_OFFSET(0x1D63DFD0)
#define SQLITE_SQLITECONNECTION_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1D63BE10)
#define SQLITE_SQLITECONNECTION_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1D63BA50)
#define SQLITE_SQLITECONNECTION_DELETE_OFFSET UNITYSDK_OFFSET(0x1D63B740)
#define SQLITE_SQLITECONNECTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D642990)
#define SQLITE_SQLITECONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6428C0)
#define SQLITE_SQLITECONNECTION_DOSAVEPOINTEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D641670)
#define SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET UNITYSDK_OFFSET(0x1D6398E0)
#define SQLITE_SQLITECONNECTION_ENABLELOADEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D638690)
#define SQLITE_SQLITECONNECTION_ENABLEWRITEAHEADLOGGING_OFFSET UNITYSDK_OFFSET(0x1D638440)
#define SQLITE_SQLITECONNECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D63CBE0)
#define SQLITE_SQLITECONNECTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D642850)
#define SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET UNITYSDK_OFFSET(0x1D63C580)
#define SQLITE_SQLITECONNECTION_FIND_OFFSET UNITYSDK_OFFSET(0x1D63C2F0)
#define SQLITE_SQLITECONNECTION_GETINSERTCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D641BD0)
#define SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET UNITYSDK_OFFSET(0x1D63C680)
#define SQLITE_SQLITECONNECTION_GETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x1D63CB20)
#define SQLITE_SQLITECONNECTION_GET_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D640260)
#define SQLITE_SQLITECONNECTION_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0x1D63F850)
#define SQLITE_SQLITECONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1D63F950)
#define SQLITE_SQLITECONNECTION_GET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0x1D63F970)
#define SQLITE_SQLITECONNECTION_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D63F830)
#define SQLITE_SQLITECONNECTION_GET_ISINTRANSACTION_OFFSET UNITYSDK_OFFSET(0x1D6411D0)
#define SQLITE_SQLITECONNECTION_GET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1D63F870)
#define SQLITE_SQLITECONNECTION_GET_OFFSET UNITYSDK_OFFSET(0x1D63C120)
#define SQLITE_SQLITECONNECTION_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F8F0)
#define SQLITE_SQLITECONNECTION_GET_STOREDATETIMOFFSETASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F930)
#define SQLITE_SQLITECONNECTION_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F910)
#define SQLITE_SQLITECONNECTION_GET_TABLEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1D635DC0)
#define SQLITE_SQLITECONNECTION_GET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1D63F890)
#define SQLITE_SQLITECONNECTION_GET_TRACER_OFFSET UNITYSDK_OFFSET(0x1D63F8D0)
#define SQLITE_SQLITECONNECTION_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1D63F8B0)
#define SQLITE_SQLITECONNECTION_INSERTALL_1_OFFSET UNITYSDK_OFFSET(0x1D63D2A0)
#define SQLITE_SQLITECONNECTION_INSERTALL_2_OFFSET UNITYSDK_OFFSET(0x1D63D6F0)
#define SQLITE_SQLITECONNECTION_INSERTALL_OFFSET UNITYSDK_OFFSET(0x1D63CEC0)
#define SQLITE_SQLITECONNECTION_INSERTORREPLACE_1_OFFSET UNITYSDK_OFFSET(0x1D63AB30)
#define SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET UNITYSDK_OFFSET(0x1D63AA20)
#define SQLITE_SQLITECONNECTION_INSERT_1_OFFSET UNITYSDK_OFFSET(0x1D63A250)
#define SQLITE_SQLITECONNECTION_INSERT_2_OFFSET UNITYSDK_OFFSET(0x1D63A340)
#define SQLITE_SQLITECONNECTION_INSERT_3_OFFSET UNITYSDK_OFFSET(0x1D63A400)
#define SQLITE_SQLITECONNECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1D63A140)
#define SQLITE_SQLITECONNECTION_MIGRATETABLE_OFFSET UNITYSDK_OFFSET(0x1D640960)
#define SQLITE_SQLITECONNECTION_NEWCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D640DF0)
#define SQLITE_SQLITECONNECTION_ONTABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1D642170)
#define SQLITE_SQLITECONNECTION_QUERY_OFFSET UNITYSDK_OFFSET(0x1D63DE80)
#define SQLITE_SQLITECONNECTION_QUOTE_OFFSET UNITYSDK_OFFSET(0x1D6401F0)
#define SQLITE_SQLITECONNECTION_REKEY_1_OFFSET UNITYSDK_OFFSET(0x1D63E1A0)
#define SQLITE_SQLITECONNECTION_REKEY_OFFSET UNITYSDK_OFFSET(0x1D63E060)
#define SQLITE_SQLITECONNECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D641790)
#define SQLITE_SQLITECONNECTION_REMOVE_TABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1D642EE0)
#define SQLITE_SQLITECONNECTION_ROLLBACKTO_1_OFFSET UNITYSDK_OFFSET(0x1D6411E0)
#define SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET UNITYSDK_OFFSET(0x1D641660)
#define SQLITE_SQLITECONNECTION_ROLLBACK_OFFSET UNITYSDK_OFFSET(0x1D63DDC0)
#define SQLITE_SQLITECONNECTION_RUNINTRANSACTION_OFFSET UNITYSDK_OFFSET(0x1D6418B0)
#define SQLITE_SQLITECONNECTION_SAVETRANSACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1D6412E0)
#define SQLITE_SQLITECONNECTION_SETKEY_1_OFFSET UNITYSDK_OFFSET(0x1D640050)
#define SQLITE_SQLITECONNECTION_SETKEY_OFFSET UNITYSDK_OFFSET(0x1D63FF40)
#define SQLITE_SQLITECONNECTION_SET_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D638550)
#define SQLITE_SQLITECONNECTION_SET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0x1D63F860)
#define SQLITE_SQLITECONNECTION_SET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1D63F960)
#define SQLITE_SQLITECONNECTION_SET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0x1D63F980)
#define SQLITE_SQLITECONNECTION_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D63F840)
#define SQLITE_SQLITECONNECTION_SET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1D63F880)
#define SQLITE_SQLITECONNECTION_SET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F900)
#define SQLITE_SQLITECONNECTION_SET_STOREDATETIMOFFSETASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F940)
#define SQLITE_SQLITECONNECTION_SET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0x1D63F920)
#define SQLITE_SQLITECONNECTION_SET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1D63F8A0)
#define SQLITE_SQLITECONNECTION_SET_TRACER_OFFSET UNITYSDK_OFFSET(0x1D63F8E0)
#define SQLITE_SQLITECONNECTION_SET_TRACE_OFFSET UNITYSDK_OFFSET(0x1D63F8C0)
#define SQLITE_SQLITECONNECTION_UPDATEALL_OFFSET UNITYSDK_OFFSET(0x1D63B300)
#define SQLITE_SQLITECONNECTION_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D63ACC0)
#define SQLITE_SQLITECONNECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D63AC10)
#define SQLITE_SQLITECONNECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D642F60)
#define SQLITE_SQLITECONNECTION__CREATETABLE_B__75_0_OFFSET UNITYSDK_OFFSET(0x1D643000)
#define SQLITE_SQLITECONNECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D63FEB0)
#define SQLITE_SQLITECONNECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D63FA20)
#define SQLITE_SQLITECONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63F990)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection_TypeDefinitionIndex = 38366;

	class SQLiteConnection : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::SQLite::TableMapping*>** StaticGet__mappings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::SQLite::TableMapping*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection_TypeDefinitionIndex)->GetStaticField(0x29000);
		}
		static ::System::IntPtr* StaticGet_NullBackupHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection_TypeDefinitionIndex)->GetStaticField(0x8E30);
		}
		static ::System::IntPtr* StaticGet_NullHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection_TypeDefinitionIndex)->GetStaticField(0x8E38);
		}
		::System::Action_1<::System::String*>* _Tracer_k__BackingField; // 0x10
		::System::Random* _rand; // 0x18
		::System::EventHandler_1<::SQLite::NotifyTableChangedEventArgs*>* TableChanged; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Tuple_2<::System::String*, ::System::String*>*, ::SQLite::PreparedSqlLiteInsertCommand*>* _insertCommandMap; // 0x28
		::System::Diagnostics::Stopwatch* _sw; // 0x30
		::System::String* _DateTimeStringFormat_k__BackingField; // 0x38
		::System::String* _DatabasePath_k__BackingField; // 0x40
		::System::Globalization::DateTimeStyles _DateTimeStyle_k__BackingField; // 0x48
		::System::Int32 _transactionDepth; // 0x4C
		::System::IntPtr _Handle_k__BackingField; // 0x50
		::System::TimeSpan _busyTimeout; // 0x58
		::System::Int64 _elapsedMilliseconds; // 0x60
		::System::Boolean _StoreDateTimOffsetAsTicks_k__BackingField; // 0x68
		::System::Boolean _StoreDateTimeAsTicks_k__BackingField; // 0x69
		::System::Boolean _Trace_k__BackingField; // 0x6A
		::System::Boolean _StoreTimeSpanAsTicks_k__BackingField; // 0x6B
		::System::Boolean _TimeExecution_k__BackingField; // 0x6C
		::System::Boolean _open; // 0x6D
		::System::Int32 _LibVersionNumber_k__BackingField; // 0x70

		::System::Void _ctor(::System::String* databasePath, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CTOR_OFFSET))(this, databasePath, storeDateTimeAsTicks);
		}

		::System::Void _ctor_1(::System::String* databasePath, ::SQLite::SQLiteOpenFlags openFlags, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CTOR_1_OFFSET))(this, databasePath, openFlags, storeDateTimeAsTicks);
		}

		::System::Void _ctor_2(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CTOR_2_OFFSET))(this, connectionString);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CCTOR_OFFSET))();
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_HANDLE_OFFSET))(this, value);
		}

		::System::String* get_DatabasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATABASEPATH_OFFSET))(this);
		}

		::System::Void set_DatabasePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATABASEPATH_OFFSET))(this, value);
		}

		::System::Int32 get_LibVersionNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_LIBVERSIONNUMBER_OFFSET))(this);
		}

		::System::Void set_LibVersionNumber(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_LIBVERSIONNUMBER_OFFSET))(this, value);
		}

		::System::Boolean get_TimeExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TIMEEXECUTION_OFFSET))(this);
		}

		::System::Void set_TimeExecution(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TIMEEXECUTION_OFFSET))(this, value);
		}

		::System::Boolean get_Trace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TRACE_OFFSET))(this);
		}

		::System::Void set_Trace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TRACE_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_Tracer()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TRACER_OFFSET))(this);
		}

		::System::Void set_Tracer(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TRACER_OFFSET))(this, value);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_STOREDATETIMEASTICKS_OFFSET))(this);
		}

		::System::Void set_StoreDateTimeAsTicks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_STOREDATETIMEASTICKS_OFFSET))(this, value);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_STORETIMESPANASTICKS_OFFSET))(this);
		}

		::System::Void set_StoreTimeSpanAsTicks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_STORETIMESPANASTICKS_OFFSET))(this, value);
		}

		::System::Boolean get_StoreDateTimOffsetAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_STOREDATETIMOFFSETASTICKS_OFFSET))(this);
		}

		::System::Void set_StoreDateTimOffsetAsTicks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_STOREDATETIMOFFSETASTICKS_OFFSET))(this, value);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET))(this);
		}

		::System::Void set_DateTimeStringFormat(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATETIMESTRINGFORMAT_OFFSET))(this, value);
		}

		::System::Globalization::DateTimeStyles get_DateTimeStyle()
		{
			return ((::System::Globalization::DateTimeStyles(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATETIMESTYLE_OFFSET))(this);
		}

		::System::Void set_DateTimeStyle(::System::Globalization::DateTimeStyles value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATETIMESTYLE_OFFSET))(this, value);
		}

		::System::Void EnableWriteAheadLogging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ENABLEWRITEAHEADLOGGING_OFFSET))(this);
		}

		static ::System::String* Quote(::System::String* unsafeString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUOTE_OFFSET))(unsafeString);
		}

		::System::Void SetKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetKey_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SETKEY_1_OFFSET))(this, key);
		}

		::System::Void ReKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_REKEY_OFFSET))(this, key);
		}

		::System::Void ReKey_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_REKEY_1_OFFSET))(this, key);
		}

		::System::Void EnableLoadExtension(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ENABLELOADEXTENSION_OFFSET))(this, enabled);
		}

		::System::TimeSpan get_BusyTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_BUSYTIMEOUT_OFFSET))(this);
		}

		::System::Void set_BusyTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_BUSYTIMEOUT_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>* get_TableMappings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TABLEMAPPINGS_OFFSET))(this);
		}

		::SQLite::TableMapping* GetMapping(::System::Type* type, ::SQLite::CreateFlags createFlags)
		{
			return ((::SQLite::TableMapping*(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET))(this, type, createFlags);
		}

		::System::Int32 DropTable(::SQLite::TableMapping* map)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET))(this, map);
		}

		::SQLite::CreateTableResult CreateTable(::System::Type* ty, ::SQLite::CreateFlags createFlags)
		{
			return ((::SQLite::CreateTableResult(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET))(this, ty, createFlags);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags createFlags, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::SQLite::CreateTablesResult*(*)(::PVOID, ::SQLite::CreateFlags, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(this, createFlags, types);
		}

		::System::Int32 CreateIndex(::System::String* indexName, ::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(this, indexName, tableName, columnNames, unique);
		}

		::System::Int32 CreateIndex_1(::System::String* indexName, ::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_1_OFFSET))(this, indexName, tableName, columnName, unique);
		}

		::System::Int32 CreateIndex_2(::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_2_OFFSET))(this, tableName, columnName, unique);
		}

		::System::Int32 CreateIndex_3(::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_3_OFFSET))(this, tableName, columnNames, unique);
		}

		::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>* GetTableInfo(::System::String* tableName)
		{
			return ((::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETTABLEINFO_OFFSET))(this, tableName);
		}

		::System::Void MigrateTable(::SQLite::TableMapping* map, ::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>* existingCols)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping*, ::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_MIGRATETABLE_OFFSET))(this, map, existingCols);
		}

		::SQLite::SQLiteCommand* NewCommand()
		{
			return ((::SQLite::SQLiteCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_NEWCOMMAND_OFFSET))(this);
		}

		::SQLite::SQLiteCommand* CreateCommand(::System::String* cmdText, ::Il2CppArray<::System::Object*>* ps)
		{
			return ((::SQLite::SQLiteCommand*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET))(this, cmdText, ps);
		}

		::SQLite::SQLiteCommand* CreateCommand_1(::System::String* cmdText, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* args)
		{
			return ((::SQLite::SQLiteCommand*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATECOMMAND_1_OFFSET))(this, cmdText, args);
		}

		::System::Int32 Execute(::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_EXECUTE_OFFSET))(this, query, args);
		}

		::System::Collections::Generic::List_1<::System::Object*>* Query(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUERY_OFFSET))(this, map, query, args);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* DeferredQuery(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET))(this, map, query, args);
		}

		::System::Object* Get(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_OFFSET))(this, pk, map);
		}

		::System::Object* Find(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FIND_OFFSET))(this, pk, map);
		}

		::System::Object* FindWithQuery(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET))(this, map, query, args);
		}

		::System::Boolean get_IsInTransaction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_ISINTRANSACTION_OFFSET))(this);
		}

		::System::Void BeginTransaction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_BEGINTRANSACTION_OFFSET))(this);
		}

		::System::String* SaveTransactionPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SAVETRANSACTIONPOINT_OFFSET))(this);
		}

		::System::Void Rollback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACK_OFFSET))(this);
		}

		::System::Void RollbackTo(::System::String* savepoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET))(this, savepoint);
		}

		::System::Void RollbackTo_1(::System::String* savepoint, ::System::Boolean noThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACKTO_1_OFFSET))(this, savepoint, noThrow);
		}

		::System::Void Release(::System::String* savepoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_RELEASE_OFFSET))(this, savepoint);
		}

		::System::Void DoSavePointExecute(::System::String* savepoint, ::System::String* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DOSAVEPOINTEXECUTE_OFFSET))(this, savepoint, cmd);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COMMIT_OFFSET))(this);
		}

		::System::Void RunInTransaction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_RUNINTRANSACTION_OFFSET))(this, action);
		}

		::System::Int32 InsertAll(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_OFFSET))(this, objects, runInTransaction);
		}

		::System::Int32 InsertAll_1(::System::Collections::IEnumerable* objects, ::System::String* extra, ::System::Boolean runInTransaction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_1_OFFSET))(this, objects, extra, runInTransaction);
		}

		::System::Int32 InsertAll_2(::System::Collections::IEnumerable* objects, ::System::Type* objType, ::System::Boolean runInTransaction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_2_OFFSET))(this, objects, objType, runInTransaction);
		}

		::System::Int32 Insert(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_OFFSET))(this, obj);
		}

		::System::Int32 InsertOrReplace(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET))(this, obj);
		}

		::System::Int32 Insert_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_1_OFFSET))(this, obj, objType);
		}

		::System::Int32 InsertOrReplace_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTORREPLACE_1_OFFSET))(this, obj, objType);
		}

		::System::Int32 Insert_2(::System::Object* obj, ::System::String* extra)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_2_OFFSET))(this, obj, extra);
		}

		::System::Int32 Insert_3(::System::Object* obj, ::System::String* extra, ::System::Type* objType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_3_OFFSET))(this, obj, extra, objType);
		}

		::SQLite::PreparedSqlLiteInsertCommand* GetInsertCommand(::SQLite::TableMapping* map, ::System::String* extra)
		{
			return ((::SQLite::PreparedSqlLiteInsertCommand*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETINSERTCOMMAND_OFFSET))(this, map, extra);
		}

		::SQLite::PreparedSqlLiteInsertCommand* CreateInsertCommand(::SQLite::TableMapping* map, ::System::String* extra)
		{
			return ((::SQLite::PreparedSqlLiteInsertCommand*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINSERTCOMMAND_OFFSET))(this, map, extra);
		}

		::System::Int32 Update(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATE_OFFSET))(this, obj);
		}

		::System::Int32 Update_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATE_1_OFFSET))(this, obj, objType);
		}

		::System::Int32 UpdateAll(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATEALL_OFFSET))(this, objects, runInTransaction);
		}

		::System::Int32 Delete(::System::Object* objectToDelete)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETE_OFFSET))(this, objectToDelete);
		}

		::System::Int32 Delete_1(::System::Object* primaryKey, ::SQLite::TableMapping* map)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETE_1_OFFSET))(this, primaryKey, map);
		}

		::System::Int32 DeleteAll(::SQLite::TableMapping* map)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETEALL_OFFSET))(this, map);
		}

		::System::Void Backup(::System::String* destinationDatabasePath, ::System::String* databaseName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_BACKUP_OFFSET))(this, destinationDatabasePath, databaseName);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void OnTableChanged(::SQLite::TableMapping* table, ::SQLite::NotifyTableChangedAction action)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping*, ::SQLite::NotifyTableChangedAction))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ONTABLECHANGED_OFFSET))(this, table, action);
		}

		::System::Void add_TableChanged(::System::EventHandler_1<::SQLite::NotifyTableChangedEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::SQLite::NotifyTableChangedEventArgs*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ADD_TABLECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_TableChanged(::System::EventHandler_1<::SQLite::NotifyTableChangedEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::SQLite::NotifyTableChangedEventArgs*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_REMOVE_TABLECHANGED_OFFSET))(this, value);
		}

		::System::String* _CreateTable_b__75_0(::SQLite::TableMapping_Column* p)
		{
			return ((::System::String*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CREATETABLE_B__75_0_OFFSET))(this, p);
		}
	};
}

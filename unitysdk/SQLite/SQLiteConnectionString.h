#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define SQLITE_SQLITECONNECTIONSTRING_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0x1B288190)
#define SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2881D0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0x1B2881E0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B2881F0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_OPENFLAGS_OFFSET UNITYSDK_OFFSET(0x1B288200)
#define SQLITE_SQLITECONNECTIONSTRING_GET_POSTKEYACTION_OFFSET UNITYSDK_OFFSET(0x1B288220)
#define SQLITE_SQLITECONNECTIONSTRING_GET_PREKEYACTION_OFFSET UNITYSDK_OFFSET(0x1B288210)
#define SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0x1B2881A0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMOFFSETASTICKS_OFFSET UNITYSDK_OFFSET(0x1B2881C0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0x1B2881B0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1B288180)
#define SQLITE_SQLITECONNECTIONSTRING_GET_VFSNAME_OFFSET UNITYSDK_OFFSET(0x1B288230)
#define SQLITE_SQLITECONNECTIONSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2882B0)
#define SQLITE_SQLITECONNECTIONSTRING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2793C0)
#define SQLITE_SQLITECONNECTIONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B288240)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionString_TypeDefinitionIndex = 36768;

	class SQLiteConnectionString : public ::System::Object
	{
	public:
		// static const ::System::String* DateTimeSqliteDefaultFormat; // 0x0
		::System::String* _DatabasePath_k__BackingField; // 0x10
		::System::String* _UniqueKey_k__BackingField; // 0x18
		::System::String* _VfsName_k__BackingField; // 0x20
		::System::Object* _Key_k__BackingField; // 0x28
		::System::Action_1<::SQLite::SQLiteConnection*>* _PostKeyAction_k__BackingField; // 0x30
		::System::Action_1<::SQLite::SQLiteConnection*>* _PreKeyAction_k__BackingField; // 0x38
		::System::String* _DateTimeStringFormat_k__BackingField; // 0x40
		::System::Boolean _StoreDateTimeAsTicks_k__BackingField; // 0x48
		::System::Boolean _StoreDateTimOffsetAsTicks_k__BackingField; // 0x49
		::System::Boolean _StoreTimeSpanAsTicks_k__BackingField; // 0x4A
		::System::Globalization::DateTimeStyles _DateTimeStyle_k__BackingField; // 0x4C
		::SQLite::SQLiteOpenFlags _OpenFlags_k__BackingField; // 0x50

		::System::Void _ctor(::System::String* databasePath, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING__CTOR_OFFSET))(this, databasePath, storeDateTimeAsTicks);
		}

		::System::Void _ctor_1(::System::String* databasePath, ::System::Boolean storeDateTimeAsTicks, ::System::Object* key, ::System::Action_1<::SQLite::SQLiteConnection*>* preKeyAction, ::System::Action_1<::SQLite::SQLiteConnection*>* postKeyAction, ::System::String* vfsName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Object*, ::System::Action_1<::SQLite::SQLiteConnection*>*, ::System::Action_1<::SQLite::SQLiteConnection*>*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING__CTOR_1_OFFSET))(this, databasePath, storeDateTimeAsTicks, key, preKeyAction, postKeyAction, vfsName);
		}

		::System::Void _ctor_2(::System::String* databasePath, ::SQLite::SQLiteOpenFlags openFlags, ::System::Boolean storeDateTimeAsTicks, ::System::Object* key, ::System::Action_1<::SQLite::SQLiteConnection*>* preKeyAction, ::System::Action_1<::SQLite::SQLiteConnection*>* postKeyAction, ::System::String* vfsName, ::System::String* dateTimeStringFormat, ::System::Boolean storeTimeSpanAsTicks, ::System::Boolean storeDateTimOffsetAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags, ::System::Boolean, ::System::Object*, ::System::Action_1<::SQLite::SQLiteConnection*>*, ::System::Action_1<::SQLite::SQLiteConnection*>*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING__CTOR_2_OFFSET))(this, databasePath, openFlags, storeDateTimeAsTicks, key, preKeyAction, postKeyAction, vfsName, dateTimeStringFormat, storeTimeSpanAsTicks, storeDateTimOffsetAsTicks);
		}

		::System::String* get_UniqueKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_UNIQUEKEY_OFFSET))(this);
		}

		::System::String* get_DatabasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATABASEPATH_OFFSET))(this);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMEASTICKS_OFFSET))(this);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_STORETIMESPANASTICKS_OFFSET))(this);
		}

		::System::Boolean get_StoreDateTimOffsetAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMOFFSETASTICKS_OFFSET))(this);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTRINGFORMAT_OFFSET))(this);
		}

		::System::Globalization::DateTimeStyles get_DateTimeStyle()
		{
			return ((::System::Globalization::DateTimeStyles(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTYLE_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_KEY_OFFSET))(this);
		}

		::SQLite::SQLiteOpenFlags get_OpenFlags()
		{
			return ((::SQLite::SQLiteOpenFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_OPENFLAGS_OFFSET))(this);
		}

		::System::Action_1<::SQLite::SQLiteConnection*>* get_PreKeyAction()
		{
			return ((::System::Action_1<::SQLite::SQLiteConnection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_PREKEYACTION_OFFSET))(this);
		}

		::System::Action_1<::SQLite::SQLiteConnection*>* get_PostKeyAction()
		{
			return ((::System::Action_1<::SQLite::SQLiteConnection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_POSTKEYACTION_OFFSET))(this);
		}

		::System::String* get_VfsName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_VFSNAME_OFFSET))(this);
		}
	};
}

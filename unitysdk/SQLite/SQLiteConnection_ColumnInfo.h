#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SQLITE_SQLITECONNECTION_COLUMNINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D6440A0)
#define SQLITE_SQLITECONNECTION_COLUMNINFO_GET_NOTNULL_OFFSET UNITYSDK_OFFSET(0x1D6440C0)
#define SQLITE_SQLITECONNECTION_COLUMNINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D6440B0)
#define SQLITE_SQLITECONNECTION_COLUMNINFO_SET_NOTNULL_OFFSET UNITYSDK_OFFSET(0x1D6440D0)
#define SQLITE_SQLITECONNECTION_COLUMNINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D6440E0)
#define SQLITE_SQLITECONNECTION_COLUMNINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6440F0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection_ColumnInfo_TypeDefinitionIndex = 38369;

	class SQLiteConnection_ColumnInfo : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _notnull_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_notnull()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO_GET_NOTNULL_OFFSET))(this);
		}

		::System::Void set_notnull(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO_SET_NOTNULL_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COLUMNINFO_TOSTRING_OFFSET))(this);
		}
	};
}

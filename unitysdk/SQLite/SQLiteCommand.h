#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SQLite3_ColType.h"

namespace SQLite { class SQLiteCommand_Binding; }
namespace SQLite { class SQLiteConnection; }
namespace SQLite { class TableMapping; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SQLITE_SQLITECOMMAND_BINDALL_OFFSET UNITYSDK_OFFSET(0x1D63EA10)
#define SQLITE_SQLITECOMMAND_BINDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1D634E60)
#define SQLITE_SQLITECOMMAND_BIND_1_OFFSET UNITYSDK_OFFSET(0x1D63E6D0)
#define SQLITE_SQLITECOMMAND_BIND_OFFSET UNITYSDK_OFFSET(0x1D63E640)
#define SQLITE_SQLITECOMMAND_EXECUTENONQUERY_OFFSET UNITYSDK_OFFSET(0x1D63E3F0)
#define SQLITE_SQLITECOMMAND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D63E620)
#define SQLITE_SQLITECOMMAND_GET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0x1D63E340)
#define SQLITE_SQLITECOMMAND_ONINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x1D63E630)
#define SQLITE_SQLITECOMMAND_PREPARE_OFFSET UNITYSDK_OFFSET(0x1D63E570)
#define SQLITE_SQLITECOMMAND_READCOL_OFFSET UNITYSDK_OFFSET(0x1D63EC00)
#define SQLITE_SQLITECOMMAND_SET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0x1D63E350)
#define SQLITE_SQLITECOMMAND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D63E750)
#define SQLITE_SQLITECOMMAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D63F7C0)
#define SQLITE_SQLITECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E360)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteCommand_TypeDefinitionIndex = 38405;

	class SQLiteCommand : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_NegativePointer()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(SQLiteCommand_TypeDefinitionIndex)->GetStaticField(0x8E20);
		}
		::System::String* _CommandText_k__BackingField; // 0x10
		::SQLite::SQLiteConnection* _conn; // 0x18
		::System::Collections::Generic::List_1<::SQLite::SQLiteCommand_Binding*>* _bindings; // 0x20

		::System::Void _ctor(::SQLite::SQLiteConnection* conn)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnection*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND__CTOR_OFFSET))(this, conn);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND__CCTOR_OFFSET))();
		}

		::System::String* get_CommandText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_GET_COMMANDTEXT_OFFSET))(this);
		}

		::System::Void set_CommandText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_SET_COMMANDTEXT_OFFSET))(this, value);
		}

		::System::Int32 ExecuteNonQuery()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTENONQUERY_OFFSET))(this);
		}

		::System::Void OnInstanceCreated(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_ONINSTANCECREATED_OFFSET))(this, obj);
		}

		::System::Void Bind(::System::String* name, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BIND_OFFSET))(this, name, val);
		}

		::System::Void Bind_1(::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BIND_1_OFFSET))(this, val);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_TOSTRING_OFFSET))(this);
		}

		::System::IntPtr Prepare()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_PREPARE_OFFSET))(this);
		}

		::System::Void Finalize(::System::IntPtr stmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_FINALIZE_OFFSET))(this, stmt);
		}

		::System::Void BindAll(::System::IntPtr stmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDALL_OFFSET))(this, stmt);
		}

		static ::System::Void BindParameter(::System::IntPtr stmt, ::System::Int32 index, ::System::Object* value, ::System::Boolean storeDateTimeAsTicks, ::System::String* dateTimeStringFormat, ::System::Boolean storeTimeSpanAsTicks, ::System::Boolean storeDateTimeOffsetAsTicks)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Object*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDPARAMETER_OFFSET))(stmt, index, value, storeDateTimeAsTicks, dateTimeStringFormat, storeTimeSpanAsTicks, storeDateTimeOffsetAsTicks);
		}

		::System::Object* ReadCol(::System::IntPtr stmt, ::System::Int32 index, ::UnityEngine::SQLite3_ColType type, ::System::Type* clrType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::UnityEngine::SQLite3_ColType, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_READCOL_OFFSET))(this, stmt, index, type, clrType);
		}
	};
}

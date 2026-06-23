#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteConnection_IndexedColumn.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define SQLITE_SQLITECONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D643020)
#define SQLITE_SQLITECONNECTION___C__CREATEINSERTCOMMAND_B__130_0_OFFSET UNITYSDK_OFFSET(0x1D643140)
#define SQLITE_SQLITECONNECTION___C__CREATEINSERTCOMMAND_B__130_1_OFFSET UNITYSDK_OFFSET(0x1D643190)
#define SQLITE_SQLITECONNECTION___C__CREATETABLE_B__75_1_OFFSET UNITYSDK_OFFSET(0x1D643120)
#define SQLITE_SQLITECONNECTION___C__CREATETABLE_B__75_2_OFFSET UNITYSDK_OFFSET(0x1D643130)
#define SQLITE_SQLITECONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D643060)
#define SQLITE_SQLITECONNECTION___C__REKEY_B__61_0_OFFSET UNITYSDK_OFFSET(0x1D6430D0)
#define SQLITE_SQLITECONNECTION___C__SETKEY_B__59_0_OFFSET UNITYSDK_OFFSET(0x1D643080)
#define SQLITE_SQLITECONNECTION___C__UPDATE_B__132_3_OFFSET UNITYSDK_OFFSET(0x1D6431D0)
#define SQLITE_SQLITECONNECTION___C___CTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x1D643070)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection___c_TypeDefinitionIndex = 38370;

	class SQLiteConnection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Byte, ::System::String*>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::System::Byte, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FB0);
		}
		static ::System::Func_2<::SQLite::SQLiteConnection_IndexedColumn, ::System::String*>** StaticGet___9__75_2()
		{
			return (::System::Func_2<::SQLite::SQLiteConnection_IndexedColumn, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FB8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__55_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FC0);
		}
		static ::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>** StaticGet___9__130_1()
		{
			return (::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FC8);
		}
		static ::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>** StaticGet___9__132_3()
		{
			return (::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FD0);
		}
		static ::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::SQLite::TableMapping_Column*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FD8);
		}
		static ::System::Func_2<::SQLite::SQLiteConnection_IndexedColumn, ::System::Int32>** StaticGet___9__75_1()
		{
			return (::System::Func_2<::SQLite::SQLiteConnection_IndexedColumn, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FE0);
		}
		static ::System::Func_2<::System::Byte, ::System::String*>** StaticGet___9__61_0()
		{
			return (::System::Func_2<::System::Byte, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FE8);
		}
		static ::SQLite::SQLiteConnection___c** StaticGet___9()
		{
			return (::SQLite::SQLiteConnection___c**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnection___c_TypeDefinitionIndex)->GetStaticField(0x28FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__55_0(::System::String* line)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C___CTOR_B__55_0_OFFSET))(this, line);
		}

		::System::String* _SetKey_b__59_0(::System::Byte x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__SETKEY_B__59_0_OFFSET))(this, x);
		}

		::System::String* _ReKey_b__61_0(::System::Byte x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__REKEY_B__61_0_OFFSET))(this, x);
		}

		::System::Int32 _CreateTable_b__75_1(::SQLite::SQLiteConnection_IndexedColumn i)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnection_IndexedColumn))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CREATETABLE_B__75_1_OFFSET))(this, i);
		}

		::System::String* _CreateTable_b__75_2(::SQLite::SQLiteConnection_IndexedColumn i)
		{
			return ((::System::String*(*)(::PVOID, ::SQLite::SQLiteConnection_IndexedColumn))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CREATETABLE_B__75_2_OFFSET))(this, i);
		}

		::System::String* _CreateInsertCommand_b__130_0(::SQLite::TableMapping_Column* c)
		{
			return ((::System::String*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CREATEINSERTCOMMAND_B__130_0_OFFSET))(this, c);
		}

		::System::String* _CreateInsertCommand_b__130_1(::SQLite::TableMapping_Column* c)
		{
			return ((::System::String*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__CREATEINSERTCOMMAND_B__130_1_OFFSET))(this, c);
		}

		::System::String* _Update_b__132_3(::SQLite::TableMapping_Column* c)
		{
			return ((::System::String*(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION___C__UPDATE_B__132_3_OFFSET))(this, c);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/SQLite/TableMapping_MapMethod.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Reflection { class MemberInfo; }

#define SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B289460)
#define SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B289510)
#define SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET UNITYSDK_OFFSET(0x1B289380)
#define SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B288850)
#define SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1B2887B0)
#define SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B288810)
#define SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1B2887F0)
#define SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1B289420)
#define SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1B289440)
#define SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET UNITYSDK_OFFSET(0x1B289450)
#define SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B288750)
#define SQLITE_TABLEMAPPING_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B288830)
#define SQLITE_TABLEMAPPING_GET_PK_OFFSET UNITYSDK_OFFSET(0x1B2887D0)
#define SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1B288770)
#define SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1B288790)
#define SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1B285D80)
#define SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1B2887C0)
#define SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B288820)
#define SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1B288800)
#define SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1B289430)
#define SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B288760)
#define SQLITE_TABLEMAPPING_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B288840)
#define SQLITE_TABLEMAPPING_SET_PK_OFFSET UNITYSDK_OFFSET(0x1B2887E0)
#define SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1B288780)
#define SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1B2887A0)
#define SQLITE_TABLEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B283F10)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_TypeDefinitionIndex = 36782;

	class TableMapping : public ::System::Object
	{
	public:
		::Il2CppArray<::SQLite::TableMapping_Column*>* _Columns_k__BackingField; // 0x10
		::SQLite::TableMapping_Column* _PK_k__BackingField; // 0x18
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertOrReplaceColumns; // 0x20
		::System::String* _GetByPrimaryKeySql_k__BackingField; // 0x28
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertColumns; // 0x30
		::System::String* _TableName_k__BackingField; // 0x38
		::SQLite::TableMapping_Column* _autoPk; // 0x40
		::System::Type* _MappedType_k__BackingField; // 0x48
		::SQLite::CreateFlags _CreateFlags_k__BackingField; // 0x50
		::SQLite::TableMapping_MapMethod _Method_k__BackingField; // 0x54
		::System::Boolean _HasAutoIncPK_k__BackingField; // 0x58
		::System::Boolean _WithoutRowId_k__BackingField; // 0x59

		::System::Void _ctor(::System::Type* type, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING__CTOR_OFFSET))(this, type, createFlags);
		}

		::System::Type* get_MappedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET))(this);
		}

		::System::Void set_MappedType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET))(this, value);
		}

		::System::String* get_TableName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET))(this);
		}

		::System::Void set_TableName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET))(this, value);
		}

		::System::Boolean get_WithoutRowId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET))(this);
		}

		::System::Void set_WithoutRowId(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET))(this, value);
		}

		::Il2CppArray<::SQLite::TableMapping_Column*>* get_Columns()
		{
			return ((::Il2CppArray<::SQLite::TableMapping_Column*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET))(this);
		}

		::System::Void set_Columns(::Il2CppArray<::SQLite::TableMapping_Column*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::SQLite::TableMapping_Column*>*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET))(this, value);
		}

		::SQLite::TableMapping_Column* get_PK()
		{
			return ((::SQLite::TableMapping_Column*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_PK_OFFSET))(this);
		}

		::System::Void set_PK(::SQLite::TableMapping_Column* value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_PK_OFFSET))(this, value);
		}

		::System::String* get_GetByPrimaryKeySql()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET))(this);
		}

		::System::Void set_GetByPrimaryKeySql(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET))(this, value);
		}

		::SQLite::CreateFlags get_CreateFlags()
		{
			return ((::SQLite::CreateFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET))(this);
		}

		::System::Void set_CreateFlags(::SQLite::CreateFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET))(this, value);
		}

		::SQLite::TableMapping_MapMethod get_Method()
		{
			return ((::SQLite::TableMapping_MapMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::SQLite::TableMapping_MapMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping_MapMethod))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_METHOD_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::Reflection::MemberInfo*>* GetPublicMembers(::System::Type* type)
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET))(this, type);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::Reflection::MemberInfo*>* GetFieldsFromValueTuple(::System::Type* type)
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET))(this, type);
		}

		::System::Boolean get_HasAutoIncPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET))(this);
		}

		::System::Void set_HasAutoIncPK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET))(this, value);
		}

		::System::Void SetAutoIncPK(::System::Object* obj, ::System::Int64 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET))(this, obj, id);
		}

		::Il2CppArray<::SQLite::TableMapping_Column*>* get_InsertColumns()
		{
			return ((::Il2CppArray<::SQLite::TableMapping_Column*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET))(this);
		}

		::Il2CppArray<::SQLite::TableMapping_Column*>* get_InsertOrReplaceColumns()
		{
			return ((::Il2CppArray<::SQLite::TableMapping_Column*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET))(this);
		}

		::SQLite::TableMapping_Column* FindColumnWithPropertyName(::System::String* propertyName)
		{
			return ((::SQLite::TableMapping_Column*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET))(this, propertyName);
		}

		::SQLite::TableMapping_Column* FindColumn(::System::String* columnName)
		{
			return ((::SQLite::TableMapping_Column*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET))(this, columnName);
		}
	};
}

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

#define SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1EA0D640)
#define SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1EA0D6F0)
#define SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET UNITYSDK_OFFSET(0x1EA0D560)
#define SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET UNITYSDK_OFFSET(0x1EA0CA40)
#define SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1EA0C9A0)
#define SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1EA0CA00)
#define SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1EA0C9E0)
#define SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1EA0D600)
#define SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1EA0D620)
#define SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET UNITYSDK_OFFSET(0x1EA0D630)
#define SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0C940)
#define SQLITE_TABLEMAPPING_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1EA0CA20)
#define SQLITE_TABLEMAPPING_GET_PK_OFFSET UNITYSDK_OFFSET(0x1EA0C9C0)
#define SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1EA0C960)
#define SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1EA0C980)
#define SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1EA09F90)
#define SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1EA0C9B0)
#define SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1EA0CA10)
#define SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1EA0C9F0)
#define SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1EA0D610)
#define SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0C950)
#define SQLITE_TABLEMAPPING_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1EA0CA30)
#define SQLITE_TABLEMAPPING_SET_PK_OFFSET UNITYSDK_OFFSET(0x1EA0C9D0)
#define SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1EA0C970)
#define SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1EA0C990)
#define SQLITE_TABLEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA08130)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_TypeDefinitionIndex = 39053;

	class TableMapping : public ::System::Object
	{
	public:
		::System::String* _TableName_k__BackingField; // 0x10
		::Il2CppArray<::SQLite::TableMapping_Column*>* _Columns_k__BackingField; // 0x18
		::System::Type* _MappedType_k__BackingField; // 0x20
		::System::String* _GetByPrimaryKeySql_k__BackingField; // 0x28
		::SQLite::TableMapping_Column* _autoPk; // 0x30
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertColumns; // 0x38
		::SQLite::TableMapping_Column* _PK_k__BackingField; // 0x40
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertOrReplaceColumns; // 0x48
		::SQLite::TableMapping_MapMethod _Method_k__BackingField; // 0x50
		::System::Boolean _HasAutoIncPK_k__BackingField; // 0x54
		::System::Boolean _WithoutRowId_k__BackingField; // 0x55
		::SQLite::CreateFlags _CreateFlags_k__BackingField; // 0x58

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

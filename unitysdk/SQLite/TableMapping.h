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

#define SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D6457B0)
#define SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D645860)
#define SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET UNITYSDK_OFFSET(0x1D6456D0)
#define SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET UNITYSDK_OFFSET(0x1D644BB0)
#define SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1D644B10)
#define SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1D644B70)
#define SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1D644B50)
#define SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1D645770)
#define SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1D645790)
#define SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET UNITYSDK_OFFSET(0x1D6457A0)
#define SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D644AB0)
#define SQLITE_TABLEMAPPING_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D644B90)
#define SQLITE_TABLEMAPPING_GET_PK_OFFSET UNITYSDK_OFFSET(0x1D644B30)
#define SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1D644AD0)
#define SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1D644AF0)
#define SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1D6420E0)
#define SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1D644B20)
#define SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1D644B80)
#define SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0x1D644B60)
#define SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0x1D645780)
#define SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D644AC0)
#define SQLITE_TABLEMAPPING_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D644BA0)
#define SQLITE_TABLEMAPPING_SET_PK_OFFSET UNITYSDK_OFFSET(0x1D644B40)
#define SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1D644AE0)
#define SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0x1D644B00)
#define SQLITE_TABLEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D640270)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_TypeDefinitionIndex = 38392;

	class TableMapping : public ::System::Object
	{
	public:
		::System::String* _TableName_k__BackingField; // 0x10
		::SQLite::TableMapping_Column* _PK_k__BackingField; // 0x18
		::Il2CppArray<::SQLite::TableMapping_Column*>* _Columns_k__BackingField; // 0x20
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertOrReplaceColumns; // 0x28
		::SQLite::TableMapping_Column* _autoPk; // 0x30
		::Il2CppArray<::SQLite::TableMapping_Column*>* _insertColumns; // 0x38
		::System::Type* _MappedType_k__BackingField; // 0x40
		::System::String* _GetByPrimaryKeySql_k__BackingField; // 0x48
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

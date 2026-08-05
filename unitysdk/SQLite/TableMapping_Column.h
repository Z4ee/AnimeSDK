#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class IndexedAttribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SQLITE_TABLEMAPPING_COLUMN_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0DD70)
#define SQLITE_TABLEMAPPING_COLUMN_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E9FB7C0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_COLLATION_OFFSET UNITYSDK_OFFSET(0x1EA0DC30)
#define SQLITE_TABLEMAPPING_COLUMN_GET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0DC10)
#define SQLITE_TABLEMAPPING_COLUMN_GET_FALLBACKVALUE_OFFSET UNITYSDK_OFFSET(0x1EA0DD50)
#define SQLITE_TABLEMAPPING_COLUMN_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1EA0DCB0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0x1EA0DC70)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0x1EA0DC50)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISFALLBACKONERROR_OFFSET UNITYSDK_OFFSET(0x1EA0DD30)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1EA0DCD0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISPK_OFFSET UNITYSDK_OFFSET(0x1EA0DC90)
#define SQLITE_TABLEMAPPING_COLUMN_GET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1EA0DCF0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA0DBB0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1EA0DBD0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1EA0DAF0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1EA0DD10)
#define SQLITE_TABLEMAPPING_COLUMN_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1EA09890)
#define SQLITE_TABLEMAPPING_COLUMN_SET_COLLATION_OFFSET UNITYSDK_OFFSET(0x1EA0DC40)
#define SQLITE_TABLEMAPPING_COLUMN_SET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0DC20)
#define SQLITE_TABLEMAPPING_COLUMN_SET_FALLBACKVALUE_OFFSET UNITYSDK_OFFSET(0x1EA0DD60)
#define SQLITE_TABLEMAPPING_COLUMN_SET_INDICES_OFFSET UNITYSDK_OFFSET(0x1EA0DCC0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0x1EA0DC80)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0x1EA0DC60)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISFALLBACKONERROR_OFFSET UNITYSDK_OFFSET(0x1EA0DD40)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1EA0DCE0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISPK_OFFSET UNITYSDK_OFFSET(0x1EA0DCA0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1EA0DD00)
#define SQLITE_TABLEMAPPING_COLUMN_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA0DBC0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1EA0DD20)
#define SQLITE_TABLEMAPPING_COLUMN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0DE70)
#define SQLITE_TABLEMAPPING_COLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D010)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_Column_TypeDefinitionIndex = 39054;

	class TableMapping_Column : public ::System::Object
	{
	public:
		::System::String* _Collation_k__BackingField; // 0x10
		::System::Reflection::MemberInfo* _member; // 0x18
		::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>* _Indices_k__BackingField; // 0x20
		::System::Object* _FallbackValue_k__BackingField; // 0x28
		::System::String* _Name_k__BackingField; // 0x30
		::System::Type* _ColumnType_k__BackingField; // 0x38
		::System::Boolean _IsAutoGuid_k__BackingField; // 0x40
		::System::Boolean _IsAutoInc_k__BackingField; // 0x41
		::System::Nullable_1<::System::Int32> _MaxStringLength_k__BackingField; // 0x44
		::System::Boolean _IsNullable_k__BackingField; // 0x4C
		::System::Boolean _StoreAsText_k__BackingField; // 0x4D
		::System::Boolean _IsFallbackOnError_k__BackingField; // 0x4E
		::System::Boolean _IsPK_k__BackingField; // 0x4F

		::System::Void _ctor(::System::Reflection::MemberInfo* member, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN__CTOR_OFFSET))(this, member, createFlags);
		}

		::System::Void _ctor_1(::System::Reflection::PropertyInfo* member, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN__CTOR_1_OFFSET))(this, member, createFlags);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_NAME_OFFSET))(this, value);
		}

		::System::Reflection::PropertyInfo* get_PropertyInfo()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYINFO_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Type* get_ColumnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_COLUMNTYPE_OFFSET))(this);
		}

		::System::Void set_ColumnType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_COLUMNTYPE_OFFSET))(this, value);
		}

		::System::String* get_Collation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_COLLATION_OFFSET))(this);
		}

		::System::Void set_Collation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_COLLATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoInc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOINC_OFFSET))(this);
		}

		::System::Void set_IsAutoInc(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOINC_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoGuid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOGUID_OFFSET))(this);
		}

		::System::Void set_IsAutoGuid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOGUID_OFFSET))(this, value);
		}

		::System::Boolean get_IsPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_ISPK_OFFSET))(this);
		}

		::System::Void set_IsPK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_ISPK_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>* get_Indices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_INDICES_OFFSET))(this);
		}

		::System::Void set_Indices(::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_INDICES_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_ISNULLABLE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_MaxStringLength()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_MAXSTRINGLENGTH_OFFSET))(this);
		}

		::System::Void set_MaxStringLength(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_MAXSTRINGLENGTH_OFFSET))(this, value);
		}

		::System::Boolean get_StoreAsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_STOREASTEXT_OFFSET))(this);
		}

		::System::Void set_StoreAsText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_STOREASTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFallbackOnError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_ISFALLBACKONERROR_OFFSET))(this);
		}

		::System::Void set_IsFallbackOnError(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_ISFALLBACKONERROR_OFFSET))(this, value);
		}

		::System::Object* get_FallbackValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GET_FALLBACKVALUE_OFFSET))(this);
		}

		::System::Void set_FallbackValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SET_FALLBACKVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_SETVALUE_OFFSET))(this, obj, val);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GETVALUE_OFFSET))(this, obj);
		}

		static ::System::Type* GetMemberType(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN_GETMEMBERTYPE_OFFSET))(m);
		}
	};
}

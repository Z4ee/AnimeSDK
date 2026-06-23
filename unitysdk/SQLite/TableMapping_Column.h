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

#define SQLITE_TABLEMAPPING_COLUMN_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1D645EE0)
#define SQLITE_TABLEMAPPING_COLUMN_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1D633920)
#define SQLITE_TABLEMAPPING_COLUMN_GET_COLLATION_OFFSET UNITYSDK_OFFSET(0x1D645DA0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1D645D80)
#define SQLITE_TABLEMAPPING_COLUMN_GET_FALLBACKVALUE_OFFSET UNITYSDK_OFFSET(0x1D645EC0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1D645E20)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0x1D645DE0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0x1D645DC0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISFALLBACKONERROR_OFFSET UNITYSDK_OFFSET(0x1D645EA0)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1D645E40)
#define SQLITE_TABLEMAPPING_COLUMN_GET_ISPK_OFFSET UNITYSDK_OFFSET(0x1D645E00)
#define SQLITE_TABLEMAPPING_COLUMN_GET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1D645E60)
#define SQLITE_TABLEMAPPING_COLUMN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D645D20)
#define SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1D645D40)
#define SQLITE_TABLEMAPPING_COLUMN_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D645C60)
#define SQLITE_TABLEMAPPING_COLUMN_GET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1D645E80)
#define SQLITE_TABLEMAPPING_COLUMN_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1D6419A0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_COLLATION_OFFSET UNITYSDK_OFFSET(0x1D645DB0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1D645D90)
#define SQLITE_TABLEMAPPING_COLUMN_SET_FALLBACKVALUE_OFFSET UNITYSDK_OFFSET(0x1D645ED0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_INDICES_OFFSET UNITYSDK_OFFSET(0x1D645E30)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0x1D645DF0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0x1D645DD0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISFALLBACKONERROR_OFFSET UNITYSDK_OFFSET(0x1D645EB0)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1D645E50)
#define SQLITE_TABLEMAPPING_COLUMN_SET_ISPK_OFFSET UNITYSDK_OFFSET(0x1D645E10)
#define SQLITE_TABLEMAPPING_COLUMN_SET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1D645E70)
#define SQLITE_TABLEMAPPING_COLUMN_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D645D30)
#define SQLITE_TABLEMAPPING_COLUMN_SET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1D645E90)
#define SQLITE_TABLEMAPPING_COLUMN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D645FE0)
#define SQLITE_TABLEMAPPING_COLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D645180)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_Column_TypeDefinitionIndex = 38393;

	class TableMapping_Column : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>* _Indices_k__BackingField; // 0x10
		::System::String* _Collation_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::Object* _FallbackValue_k__BackingField; // 0x28
		::System::Type* _ColumnType_k__BackingField; // 0x30
		::System::Reflection::MemberInfo* _member; // 0x38
		::System::Nullable_1<::System::Int32> _MaxStringLength_k__BackingField; // 0x40
		::System::Boolean _IsAutoGuid_k__BackingField; // 0x48
		::System::Boolean _StoreAsText_k__BackingField; // 0x49
		::System::Boolean _IsPK_k__BackingField; // 0x4A
		::System::Boolean _IsNullable_k__BackingField; // 0x4B
		::System::Boolean _IsAutoInc_k__BackingField; // 0x4C
		::System::Boolean _IsFallbackOnError_k__BackingField; // 0x4D

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

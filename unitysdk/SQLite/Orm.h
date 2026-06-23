#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class IndexedAttribute; }
namespace SQLite { class TableMapping_Column; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define SQLITE_ORM_COLLATION_OFFSET UNITYSDK_OFFSET(0x1D634280)
#define SQLITE_ORM_FALLBACKVALUE_OFFSET UNITYSDK_OFFSET(0x1D634830)
#define SQLITE_ORM_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1D6343F0)
#define SQLITE_ORM_GETINDICES_OFFSET UNITYSDK_OFFSET(0x1D634510)
#define SQLITE_ORM_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D634460)
#define SQLITE_ORM_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1D633AC0)
#define SQLITE_ORM_INFLATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D6344D0)
#define SQLITE_ORM_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0x1D6342E0)
#define SQLITE_ORM_ISFALLBACKONERROR_OFFSET UNITYSDK_OFFSET(0x1D634720)
#define SQLITE_ORM_ISMARKEDNOTNULL_OFFSET UNITYSDK_OFFSET(0x1D634610)
#define SQLITE_ORM_ISPK_OFFSET UNITYSDK_OFFSET(0x1D634170)
#define SQLITE_ORM_MAXSTRINGLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1D6345B0)
#define SQLITE_ORM_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1D634550)
#define SQLITE_ORM_SQLDECL_OFFSET UNITYSDK_OFFSET(0x1D633B50)
#define SQLITE_ORM_SQLTYPE_OFFSET UNITYSDK_OFFSET(0x1D633D10)

namespace SQLite
{
	inline static constexpr unsigned int Orm_TypeDefinitionIndex = 38403;

	class Orm : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultMaxStringLength = 0x8C; // 0x0
		// static const ::System::String* ImplicitPkName; // 0x0
		// static const ::System::String* ImplicitIndexSuffix; // 0x0

		static ::System::Type* GetType(::System::Object* obj)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETTYPE_OFFSET))(obj);
		}

		static ::System::String* SqlDecl(::SQLite::TableMapping_Column* p, ::System::Boolean storeDateTimeAsTicks, ::System::Boolean storeTimeSpanAsTicks, ::System::Boolean storeDateTimOffsetAsTicks)
		{
			return ((::System::String*(*)(::SQLite::TableMapping_Column*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_ORM_SQLDECL_OFFSET))(p, storeDateTimeAsTicks, storeTimeSpanAsTicks, storeDateTimOffsetAsTicks);
		}

		static ::System::String* SqlType(::SQLite::TableMapping_Column* p, ::System::Boolean storeDateTimeAsTicks, ::System::Boolean storeTimeSpanAsTicks, ::System::Boolean storeDateTimOffsetAsTicks)
		{
			return ((::System::String*(*)(::SQLite::TableMapping_Column*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_ORM_SQLTYPE_OFFSET))(p, storeDateTimeAsTicks, storeTimeSpanAsTicks, storeDateTimOffsetAsTicks);
		}

		static ::System::Boolean IsPK(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISPK_OFFSET))(p);
		}

		static ::System::String* Collation(::System::Reflection::MemberInfo* p)
		{
			return ((::System::String*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_COLLATION_OFFSET))(p);
		}

		static ::System::Boolean IsAutoInc(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISAUTOINC_OFFSET))(p);
		}

		static ::System::Reflection::FieldInfo* GetField(::System::Reflection::TypeInfo* t, ::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Reflection::TypeInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETFIELD_OFFSET))(t, name);
		}

		static ::System::Reflection::PropertyInfo* GetProperty(::System::Reflection::TypeInfo* t, ::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::TypeInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETPROPERTY_OFFSET))(t, name);
		}

		static ::System::Object* InflateAttribute(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Object*(*)(::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ORM_INFLATEATTRIBUTE_OFFSET))(x);
		}

		static ::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>* GetIndices(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SQLite::IndexedAttribute*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETINDICES_OFFSET))(p);
		}

		static ::System::Nullable_1<::System::Int32> MaxStringLength(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_MAXSTRINGLENGTH_OFFSET))(p);
		}

		static ::System::Nullable_1<::System::Int32> MaxStringLength_1(::System::Reflection::PropertyInfo* p)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_MAXSTRINGLENGTH_1_OFFSET))(p);
		}

		static ::System::Boolean IsMarkedNotNull(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISMARKEDNOTNULL_OFFSET))(p);
		}

		static ::System::Boolean IsFallbackOnError(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISFALLBACKONERROR_OFFSET))(p);
		}

		static ::System::Object* FallbackValue(::System::Reflection::MemberInfo* p)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SQLITE_ORM_FALLBACKVALUE_OFFSET))(p);
		}
	};
}

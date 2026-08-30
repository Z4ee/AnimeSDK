#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANREADMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1BF07E20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANSETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1BF080B0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ENSURENOTNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1BF09BD0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETASSEMBLYDELIMITERINDEX_OFFSET UNITYSDK_OFFSET(0x1BF0D930)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BF0D250)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BF08D10)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF0DEE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF0E160)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCOLLECTIONITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1BF0A710)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF09740)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BF098C0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BF0F6C0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDICTIONARYKEYVALUETYPES_OFFSET UNITYSDK_OFFSET(0x1BF0AB50)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDSANDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF0B760)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF0C740)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERINFOFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1BF0D9A0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BF085F0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1BF0B0C0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1BF092B0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF0C860)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1BF092D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_HASDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BF07B80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_1_OFFSET UNITYSDK_OFFSET(0x1BF09D70)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BF09D30)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BF0A430)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_1_OFFSET UNITYSDK_OFFSET(0x1BF0A290)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BF0A250)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BF09C20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1BF0AFF0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BF0AED0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1BF099E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1BF098F0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISOVERRIDENGENERICMEMBER_OFFSET UNITYSDK_OFFSET(0x1BF0CDD0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1BF08F80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1BF08A60)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEASSEMBLYDETAILS_OFFSET UNITYSDK_OFFSET(0x1BF093E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x1BF0E140)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1BF0B480)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SPLITFULLYQUALIFIEDTYPENAME_OFFSET UNITYSDK_OFFSET(0x1BF0D830)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF08A40)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionUtils_TypeDefinitionIndex = 9621;

	class ReflectionUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils_TypeDefinitionIndex)->GetStaticField(0x550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsVirtual(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISVIRTUAL_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* GetBaseDefinition(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETBASEDEFINITION_OFFSET))(a1);
		}

		static ::System::Boolean IsPublic(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISPUBLIC_OFFSET))(a1);
		}

		static ::System::Type* GetObjectType(::System::Object* a1)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETOBJECTTYPE_OFFSET))(a1);
		}

		static ::System::String* GetTypeName(::System::Type* a1, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle a2, ::System::Runtime::Serialization::SerializationBinder* a3)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETTYPENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* RemoveAssemblyDetails(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEASSEMBLYDETAILS_OFFSET))(a1);
		}

		static ::System::Boolean HasDefaultConstructor(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_HASDEFAULTCONSTRUCTOR_OFFSET))(a1, a2);
		}

		static ::System::Reflection::ConstructorInfo* GetDefaultConstructor(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_OFFSET))(a1);
		}

		static ::System::Reflection::ConstructorInfo* GetDefaultConstructor_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNullable(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsNullableType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Type* EnsureNotNullableType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ENSURENOTNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericDefinition(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISGENERICDEFINITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean ImplementsGenericDefinition(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean ImplementsGenericDefinition_1(::System::Type* a1, ::System::Type* a2, ::System::Type*& a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InheritsGenericDefinition(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean InheritsGenericDefinition_1(::System::Type* a1, ::System::Type* a2, ::System::Type*& a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InheritsGenericDefinitionInternal(::System::Type* a1, ::System::Type* a2, ::System::Type*& a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITIONINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetCollectionItemType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCOLLECTIONITEMTYPE_OFFSET))(a1);
		}

		static ::System::Void GetDictionaryKeyValueTypes(::System::Type* a1, ::System::Type*& a2, ::System::Type*& a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*&, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDICTIONARYKEYVALUETYPES_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetMemberUnderlyingType(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERUNDERLYINGTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsIndexedProperty(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_OFFSET))(a1);
		}

		static ::System::Boolean IsIndexedProperty_1(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_1_OFFSET))(a1);
		}

		static ::System::Object* GetMemberValue(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void SetMemberValue(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SETMEMBERVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CanReadMemberValue(::System::Reflection::MemberInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANREADMEMBERVALUE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanSetMemberValue(::System::Reflection::MemberInfo* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANSETMEMBERVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetFieldsAndProperties(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDSANDPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsOverridenGenericMember(::System::Reflection::MemberInfo* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISOVERRIDENGENERICMEMBER_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Attribute*>* GetAttributes(::System::Object* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Object*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SplitFullyQualifiedTypeName(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SPLITFULLYQUALIFIEDTYPENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Nullable_1<::System::Int32> GetAssemblyDelimiterIndex(::System::String* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETASSEMBLYDELIMITERINDEX_OFFSET))(a1);
		}

		static ::System::Reflection::MemberInfo* GetMemberInfoFromType(::System::Type* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERINFOFROMTYPE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDS_OFFSET))(a1, a2);
		}

		static ::System::Void GetChildPrivateFields(::System::Collections::Generic::IList_1<::System::Reflection::MemberInfo*>* a1, ::System::Type* a2, ::System::Reflection::BindingFlags a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Reflection::MemberInfo*>*, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEFIELDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Reflection::BindingFlags RemoveFlag(::System::Reflection::BindingFlags a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::BindingFlags(*)(::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void GetChildPrivateProperties(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* a1, ::System::Type* a2, ::System::Reflection::BindingFlags a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEPROPERTIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* GetDefaultValue(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTVALUE_OFFSET))(a1);
		}
	};
}

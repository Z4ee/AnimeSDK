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

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANREADMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17ACE010)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANSETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17ACE100)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ENSURENOTNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x17ACEE60)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETASSEMBLYDELIMITERINDEX_OFFSET UNITYSDK_OFFSET(0x17AD15E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17AD10A0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x17ACE7D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEFIELDS_OFFSET UNITYSDK_OFFSET(0x17AD1860)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17AD19F0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCOLLECTIONITEMTYPE_OFFSET UNITYSDK_OFFSET(0x17ACF610)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x17ACEBB0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17ACEC90)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17AD20E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDICTIONARYKEYVALUETYPES_OFFSET UNITYSDK_OFFSET(0x17ACF830)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDSANDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17ACFFD0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x17AD0A50)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERINFOFROMTYPE_OFFSET UNITYSDK_OFFSET(0x17AD1650)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x17ACE400)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17ACFBA0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17ACE940)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17AD0B00)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x17ACE960)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_HASDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17ACDE20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_1_OFFSET UNITYSDK_OFFSET(0x17ACEFB0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x17ACEF70)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x17ACF530)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_1_OFFSET UNITYSDK_OFFSET(0x17ACF320)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x17ACF2E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISGENERICDEFINITION_OFFSET UNITYSDK_OFFSET(0x17ACEF20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x17ACFB40)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x17ACFA90)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x17ACED90)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x17ACECC0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISOVERRIDENGENERICMEMBER_OFFSET UNITYSDK_OFFSET(0x17AD0EA0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x17ACE880)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x17ACE6C0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEASSEMBLYDETAILS_OFFSET UNITYSDK_OFFSET(0x17ACEA10)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x17AD19D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17ACFE30)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SPLITFULLYQUALIFIEDTYPENAME_OFFSET UNITYSDK_OFFSET(0x17AD14E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ACE6A0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionUtils_TypeDefinitionIndex = 8427;

	class ReflectionUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils_TypeDefinitionIndex)->GetStaticField(0x910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsVirtual(::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISVIRTUAL_OFFSET))(propertyInfo);
		}

		static ::System::Reflection::MethodInfo* GetBaseDefinition(::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETBASEDEFINITION_OFFSET))(propertyInfo);
		}

		static ::System::Boolean IsPublic(::System::Reflection::PropertyInfo* property)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISPUBLIC_OFFSET))(property);
		}

		static ::System::Type* GetObjectType(::System::Object* v)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETOBJECTTYPE_OFFSET))(v);
		}

		static ::System::String* GetTypeName(::System::Type* t, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle assemblyFormat, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETTYPENAME_OFFSET))(t, assemblyFormat, binder);
		}

		static ::System::String* RemoveAssemblyDetails(::System::String* fullyQualifiedTypeName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEASSEMBLYDETAILS_OFFSET))(fullyQualifiedTypeName);
		}

		static ::System::Boolean HasDefaultConstructor(::System::Type* t, ::System::Boolean nonPublic)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_HASDEFAULTCONSTRUCTOR_OFFSET))(t, nonPublic);
		}

		static ::System::Reflection::ConstructorInfo* GetDefaultConstructor(::System::Type* t)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_OFFSET))(t);
		}

		static ::System::Reflection::ConstructorInfo* GetDefaultConstructor_1(::System::Type* t, ::System::Boolean nonPublic)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTCONSTRUCTOR_1_OFFSET))(t, nonPublic);
		}

		static ::System::Boolean IsNullable(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLE_OFFSET))(t);
		}

		static ::System::Boolean IsNullableType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISNULLABLETYPE_OFFSET))(t);
		}

		static ::System::Type* EnsureNotNullableType(::System::Type* t)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ENSURENOTNULLABLETYPE_OFFSET))(t);
		}

		static ::System::Boolean IsGenericDefinition(::System::Type* type, ::System::Type* genericInterfaceDefinition)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISGENERICDEFINITION_OFFSET))(type, genericInterfaceDefinition);
		}

		static ::System::Boolean ImplementsGenericDefinition(::System::Type* type, ::System::Type* genericInterfaceDefinition)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_OFFSET))(type, genericInterfaceDefinition);
		}

		static ::System::Boolean ImplementsGenericDefinition_1(::System::Type* type, ::System::Type* genericInterfaceDefinition, ::System::Type*& implementingType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_IMPLEMENTSGENERICDEFINITION_1_OFFSET))(type, genericInterfaceDefinition, implementingType);
		}

		static ::System::Boolean InheritsGenericDefinition(::System::Type* type, ::System::Type* genericClassDefinition)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_OFFSET))(type, genericClassDefinition);
		}

		static ::System::Boolean InheritsGenericDefinition_1(::System::Type* type, ::System::Type* genericClassDefinition, ::System::Type*& implementingType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITION_1_OFFSET))(type, genericClassDefinition, implementingType);
		}

		static ::System::Boolean InheritsGenericDefinitionInternal(::System::Type* currentType, ::System::Type* genericClassDefinition, ::System::Type*& implementingType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_INHERITSGENERICDEFINITIONINTERNAL_OFFSET))(currentType, genericClassDefinition, implementingType);
		}

		static ::System::Type* GetCollectionItemType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCOLLECTIONITEMTYPE_OFFSET))(type);
		}

		static ::System::Void GetDictionaryKeyValueTypes(::System::Type* dictionaryType, ::System::Type*& keyType, ::System::Type*& valueType)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*&, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDICTIONARYKEYVALUETYPES_OFFSET))(dictionaryType, keyType, valueType);
		}

		static ::System::Type* GetMemberUnderlyingType(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERUNDERLYINGTYPE_OFFSET))(member);
		}

		static ::System::Boolean IsIndexedProperty(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_OFFSET))(member);
		}

		static ::System::Boolean IsIndexedProperty_1(::System::Reflection::PropertyInfo* property)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISINDEXEDPROPERTY_1_OFFSET))(property);
		}

		static ::System::Object* GetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERVALUE_OFFSET))(member, target);
		}

		static ::System::Void SetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* target, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SETMEMBERVALUE_OFFSET))(member, target, value);
		}

		static ::System::Boolean CanReadMemberValue(::System::Reflection::MemberInfo* member, ::System::Boolean nonPublic)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANREADMEMBERVALUE_OFFSET))(member, nonPublic);
		}

		static ::System::Boolean CanSetMemberValue(::System::Reflection::MemberInfo* member, ::System::Boolean nonPublic, ::System::Boolean canSetReadOnly)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_CANSETMEMBERVALUE_OFFSET))(member, nonPublic, canSetReadOnly);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetFieldsAndProperties(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDSANDPROPERTIES_OFFSET))(type, bindingAttr);
		}

		static ::System::Boolean IsOverridenGenericMember(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_ISOVERRIDENGENERICMEMBER_OFFSET))(memberInfo, bindingAttr);
		}

		static ::Il2CppArray<::System::Attribute*>* GetAttributes(::System::Object* attributeProvider, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Object*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETATTRIBUTES_OFFSET))(attributeProvider, attributeType, inherit);
		}

		static ::System::Void SplitFullyQualifiedTypeName(::System::String* fullyQualifiedTypeName, ::System::String*& typeName, ::System::String*& assemblyName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_SPLITFULLYQUALIFIEDTYPENAME_OFFSET))(fullyQualifiedTypeName, typeName, assemblyName);
		}

		static ::System::Nullable_1<::System::Int32> GetAssemblyDelimiterIndex(::System::String* fullyQualifiedTypeName)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETASSEMBLYDELIMITERINDEX_OFFSET))(fullyQualifiedTypeName);
		}

		static ::System::Reflection::MemberInfo* GetMemberInfoFromType(::System::Type* targetType, ::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETMEMBERINFOFROMTYPE_OFFSET))(targetType, memberInfo);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETFIELDS_OFFSET))(targetType, bindingAttr);
		}

		static ::System::Void GetChildPrivateFields(::System::Collections::Generic::IList_1<::System::Reflection::MemberInfo*>* initialFields, ::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Reflection::MemberInfo*>*, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEFIELDS_OFFSET))(initialFields, targetType, bindingAttr);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETPROPERTIES_OFFSET))(targetType, bindingAttr);
		}

		static ::System::Reflection::BindingFlags RemoveFlag(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::BindingFlags flag)
		{
			return ((::System::Reflection::BindingFlags(*)(::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_REMOVEFLAG_OFFSET))(bindingAttr, flag);
		}

		static ::System::Void GetChildPrivateProperties(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* initialProperties, ::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETCHILDPRIVATEPROPERTIES_OFFSET))(initialProperties, targetType, bindingAttr);
		}

		static ::System::Object* GetDefaultValue(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS_GETDEFAULTVALUE_OFFSET))(type);
		}
	};
}

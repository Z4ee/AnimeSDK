#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETACCESSORS_OFFSET UNITYSDK_OFFSET(0x1C47D950)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1C47D8F0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C47D8C0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C47D980)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C47D9B0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C47D9E0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C47DA10)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_ALIASEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C47D720)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C47D830)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C47D860)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C47D890)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C47D7A0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x1C47D760)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1C47D730)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C47D790)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1C47D800)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1C47D7D0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1C47D920)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C47DA50)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C47D6D0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47D660)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int MemberAliasPropertyInfo_TypeDefinitionIndex = 7527;

	class MemberAliasPropertyInfo : public ::System::Reflection::PropertyInfo
	{
	public:
		// static const ::System::String* FakeNameSeparatorString; // 0x0
		::System::Reflection::PropertyInfo* aliasedProperty; // 0x10
		::System::String* mangledName; // 0x18

		::System::Void _ctor(::System::Reflection::PropertyInfo* prop, ::System::String* namePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO__CTOR_OFFSET))(this, prop, namePrefix);
		}

		::System::Void _ctor_1(::System::Reflection::PropertyInfo* prop, ::System::String* namePrefix, ::System::String* separatorString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO__CTOR_1_OFFSET))(this, prop, namePrefix, separatorString);
		}

		::System::Reflection::PropertyInfo* get_AliasedProperty()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_ALIASEDPROPERTY_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_MODULE_OFFSET))(this);
		}

		::System::Int32 get_MetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_METADATATOKEN_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Reflection::PropertyAttributes get_Attributes()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GET_CANWRITE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetAccessors(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETACCESSORS_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETGETMETHOD_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetIndexParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETINDEXPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETSETMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_GETVALUE_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASPROPERTYINFO_SETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}
	};
}

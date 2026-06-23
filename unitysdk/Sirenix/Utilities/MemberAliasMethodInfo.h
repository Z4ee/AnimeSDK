#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class ParameterInfo; }

#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DE523B0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1DE52410)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE523E0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1DE52440)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DE52470)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_ALIASEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1DE52270)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE522E0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1DE52340)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1DE522B0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DE52370)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1DE52380)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE52280)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1DE52310)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE524A0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1DE524E0)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE52220)
#define SIRENIX_UTILITIES_MEMBERALIASMETHODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE521B0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int MemberAliasMethodInfo_TypeDefinitionIndex = 6500;

	class MemberAliasMethodInfo : public ::System::Reflection::MethodInfo
	{
	public:
		// static const ::System::String* FAKE_NAME_SEPARATOR_STRING; // 0x0
		::System::Reflection::MethodInfo* aliasedMethod; // 0x10
		::System::String* mangledName; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::String* namePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO__CTOR_OFFSET))(this, method, namePrefix);
		}

		::System::Void _ctor_1(::System::Reflection::MethodInfo* method, ::System::String* namePrefix, ::System::String* separatorString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO__CTOR_1_OFFSET))(this, method, namePrefix, separatorString);
		}

		::System::Reflection::MethodInfo* get_AliasedMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_ALIASEDMETHOD_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* get_ReturnTypeCustomAttributes()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETBASEDEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_GETPARAMETERS_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_INVOKE_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MEMBERALIASMETHODINFO_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}
	};
}

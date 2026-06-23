#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/MemberTypes.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1DB2AFC0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSIGNABLETOTYPENAME_1_OFFSET UNITYSDK_OFFSET(0x1DB2B210)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSIGNABLETOTYPENAME_OFFSET UNITYSDK_OFFSET(0x1DB2B0F0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1DB2AF90)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DB2AE70)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_IMPLEMENTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1DB2B230)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1DB2B0A0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1DB2B020)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x1DB2AFF0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DB2AF60)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1DB2AF30)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1DB2AEA0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1DB2B070)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DB25F00)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DB2B0D0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1DB2AE40)
#define NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_METHOD_OFFSET UNITYSDK_OFFSET(0x1DB2AE10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 7090;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo* Method(::System::Delegate* d)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_METHOD_OFFSET))(d);
		}

		static ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Reflection::MemberTypes(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_MEMBERTYPE_OFFSET))(memberInfo);
		}

		static ::System::Boolean ContainsGenericParameters(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_CONTAINSGENERICPARAMETERS_OFFSET))(type);
		}

		static ::System::Boolean IsInterface(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISINTERFACE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET))(type);
		}

		static ::System::Type* BaseType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_BASETYPE_OFFSET))(type);
		}

		static ::System::Reflection::Assembly* Assembly(::System::Type* type)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSEMBLY_OFFSET))(type);
		}

		static ::System::Boolean IsEnum(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISENUM_OFFSET))(type);
		}

		static ::System::Boolean IsClass(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISCLASS_OFFSET))(type);
		}

		static ::System::Boolean IsSealed(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISSEALED_OFFSET))(type);
		}

		static ::System::Boolean IsAbstract(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISABSTRACT_OFFSET))(type);
		}

		static ::System::Boolean IsVisible(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISVISIBLE_OFFSET))(type);
		}

		static ::System::Boolean IsValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ISVALUETYPE_OFFSET))(type);
		}

		static ::System::Boolean AssignableToTypeName(::System::Type* type, ::System::String* fullTypeName, ::System::Type*& match)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSIGNABLETOTYPENAME_OFFSET))(type, fullTypeName, match);
		}

		static ::System::Boolean AssignableToTypeName_1(::System::Type* type, ::System::String* fullTypeName)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_ASSIGNABLETOTYPENAME_1_OFFSET))(type, fullTypeName);
		}

		static ::System::Boolean ImplementInterface(::System::Type* type, ::System::Type* interfaceType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEEXTENSIONS_IMPLEMENTINTERFACE_OFFSET))(type, interfaceType);
		}
	};
}

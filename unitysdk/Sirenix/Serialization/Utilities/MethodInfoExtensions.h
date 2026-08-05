#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_DEALIASMETHOD_OFFSET UNITYSDK_OFFSET(0x1FB99920)
#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETFULLNAME_1_OFFSET UNITYSDK_OFFSET(0x1FB99400)
#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x1FB99440)
#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETPARAMSNAMES_OFFSET UNITYSDK_OFFSET(0x1FB99620)
#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_ISALIASMETHOD_OFFSET UNITYSDK_OFFSET(0x1FB998D0)
#define SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_ISEXTENSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FB99560)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int MethodInfoExtensions_TypeDefinitionIndex = 7623;

	class MethodInfoExtensions : public ::System::Object
	{
	public:
		static ::System::String* GetFullName(::System::Reflection::MethodBase* method, ::System::String* extensionMethodPrefix)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETFULLNAME_OFFSET))(method, extensionMethodPrefix);
		}

		static ::System::String* GetParamsNames(::System::Reflection::MethodBase* method)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETPARAMSNAMES_OFFSET))(method);
		}

		static ::System::String* GetFullName_1(::System::Reflection::MethodBase* method)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_GETFULLNAME_1_OFFSET))(method);
		}

		static ::System::Boolean IsExtensionMethod(::System::Reflection::MethodBase* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_ISEXTENSIONMETHOD_OFFSET))(method);
		}

		static ::System::Boolean IsAliasMethod(::System::Reflection::MethodInfo* methodInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_ISALIASMETHOD_OFFSET))(methodInfo);
		}

		static ::System::Reflection::MethodInfo* DeAliasMethod(::System::Reflection::MethodInfo* methodInfo, ::System::Boolean throwOnNotAliased)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_METHODINFOEXTENSIONS_DEALIASMETHOD_OFFSET))(methodInfo, throwOnNotAliased);
		}
	};
}

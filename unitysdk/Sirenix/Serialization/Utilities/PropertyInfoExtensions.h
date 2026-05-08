#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_DEALIASPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C502860)
#define SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_ISALIASPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C502810)
#define SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_ISAUTOPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C5025A0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int PropertyInfoExtensions_TypeDefinitionIndex = 7490;

	class PropertyInfoExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsAutoProperty(::System::Reflection::PropertyInfo* propInfo, ::System::Boolean allowVirtual)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_ISAUTOPROPERTY_OFFSET))(propInfo, allowVirtual);
		}

		static ::System::Boolean IsAliasProperty(::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_ISALIASPROPERTY_OFFSET))(propertyInfo);
		}

		static ::System::Reflection::PropertyInfo* DeAliasProperty(::System::Reflection::PropertyInfo* propertyInfo, ::System::Boolean throwOnNotAliased)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::PropertyInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_PROPERTYINFOEXTENSIONS_DEALIASPROPERTY_OFFSET))(propertyInfo, throwOnNotAliased);
		}
	};
}

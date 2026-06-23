#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_FIELDINFOEXTENSIONS_DEALIASFIELD_OFFSET UNITYSDK_OFFSET(0x1E877AC0)
#define SIRENIX_SERIALIZATION_UTILITIES_FIELDINFOEXTENSIONS_ISALIASFIELD_OFFSET UNITYSDK_OFFSET(0x1E877A70)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int FieldInfoExtensions_TypeDefinitionIndex = 7610;

	class FieldInfoExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsAliasField(::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FIELDINFOEXTENSIONS_ISALIASFIELD_OFFSET))(fieldInfo);
		}

		static ::System::Reflection::FieldInfo* DeAliasField(::System::Reflection::FieldInfo* fieldInfo, ::System::Boolean throwOnNotAliased)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Reflection::FieldInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FIELDINFOEXTENSIONS_DEALIASFIELD_OFFSET))(fieldInfo, throwOnNotAliased);
		}
	};
}

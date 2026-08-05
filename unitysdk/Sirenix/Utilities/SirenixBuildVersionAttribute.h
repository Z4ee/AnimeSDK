#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F263D90)
#define SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F263DA0)
#define SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F263DB0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixBuildVersionAttribute_TypeDefinitionIndex = 6514;

	class SirenixBuildVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Version_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE__CTOR_OFFSET))(this, version);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDVERSIONATTRIBUTE_SET_VERSION_OFFSET))(this, value);
		}
	};
}

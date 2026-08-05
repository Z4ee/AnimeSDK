#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE_GET_BUILDNAME_OFFSET UNITYSDK_OFFSET(0x1F263D60)
#define SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE_SET_BUILDNAME_OFFSET UNITYSDK_OFFSET(0x1F263D70)
#define SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F263D80)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixBuildNameAttribute_TypeDefinitionIndex = 6513;

	class SirenixBuildNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _BuildName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* buildName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE__CTOR_OFFSET))(this, buildName);
		}

		::System::String* get_BuildName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE_GET_BUILDNAME_OFFSET))(this);
		}

		::System::Void set_BuildName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXBUILDNAMEATTRIBUTE_SET_BUILDNAME_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

#define MONO_SECURITY_X509_X520_COUNTRYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C042B10)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_CountryName_TypeDefinitionIndex = 2323;

	class X520_CountryName : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_COUNTRYNAME__CTOR_OFFSET))(this);
		}
	};
}

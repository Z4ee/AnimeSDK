#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

#define MONO_SECURITY_X509_X520_GIVENNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B9840)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_GivenName_TypeDefinitionIndex = 2325;

	class X520_GivenName : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_GIVENNAME__CTOR_OFFSET))(this);
		}
	};
}

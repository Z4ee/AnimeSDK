#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

#define MONO_SECURITY_X509_X520_ORGANIZATIONALUNITNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D22D0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_OrganizationalUnitName_TypeDefinitionIndex = 2316;

	class X520_OrganizationalUnitName : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ORGANIZATIONALUNITNAME__CTOR_OFFSET))(this);
		}
	};
}

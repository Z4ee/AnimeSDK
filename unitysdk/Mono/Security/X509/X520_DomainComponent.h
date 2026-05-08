#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

#define MONO_SECURITY_X509_X520_DOMAINCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9E870)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_DomainComponent_TypeDefinitionIndex = 2319;

	class X520_DomainComponent : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_DOMAINCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}

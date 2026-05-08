#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

#define MONO_SECURITY_X509_X520_NAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19EE20)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_Name_TypeDefinitionIndex = 2311;

	class X520_Name : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_NAME__CTOR_OFFSET))(this);
		}
	};
}

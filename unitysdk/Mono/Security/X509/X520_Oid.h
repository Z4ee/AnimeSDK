#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X520_AttributeTypeAndValue.h"

namespace System { class String; }

#define MONO_SECURITY_X509_X520_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x1F603C70)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_Oid_TypeDefinitionIndex = 2320;

	class X520_Oid : public ::Mono::Security::X509::X520_AttributeTypeAndValue
	{
	public:
		::System::Void _ctor(::System::String* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_OID__CTOR_OFFSET))(this, oid);
		}
	};
}

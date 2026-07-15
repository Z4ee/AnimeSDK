#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_SAFEBAG_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1B663090)
#define MONO_SECURITY_X509_SAFEBAG_GET_BAGOID_OFFSET UNITYSDK_OFFSET(0x1B663080)
#define MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B65ABA0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int SafeBag_TypeDefinitionIndex = 2256;

	class SafeBag : public ::System::Object
	{
	public:
		::Mono::Security::ASN1* _asn1; // 0x10
		::System::String* _bagOID; // 0x18

		::System::Void _ctor(::System::String* a1, ::Mono::Security::ASN1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_BagOID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_GET_BAGOID_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_GET_ASN1_OFFSET))(this);
		}
	};
}

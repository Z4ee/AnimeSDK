#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_SAFEBAG_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1FAE42E0)
#define MONO_SECURITY_X509_SAFEBAG_GET_BAGOID_OFFSET UNITYSDK_OFFSET(0x1FAE42D0)
#define MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE42C0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int SafeBag_TypeDefinitionIndex = 2288;

	class SafeBag : public ::System::Object
	{
	public:
		::System::String* _bagOID; // 0x10
		::Mono::Security::ASN1* _asn1; // 0x18

		::System::Void _ctor(::System::String* bagOID, ::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET))(this, bagOID, asn1);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_PKCS7_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF525B0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_Oid_TypeDefinitionIndex = 2276;

	class PKCS7_Oid : public ::System::Object
	{
	public:
		// static const ::System::String* rsaEncryption; // 0x0
		// static const ::System::String* data; // 0x0
		// static const ::System::String* signedData; // 0x0
		// static const ::System::String* envelopedData; // 0x0
		// static const ::System::String* signedAndEnvelopedData; // 0x0
		// static const ::System::String* digestedData; // 0x0
		// static const ::System::String* encryptedData; // 0x0
		// static const ::System::String* contentType; // 0x0
		// static const ::System::String* messageDigest; // 0x0
		// static const ::System::String* signingTime; // 0x0
		// static const ::System::String* countersignature; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_OID__CTOR_OFFSET))(this);
		}
	};
}

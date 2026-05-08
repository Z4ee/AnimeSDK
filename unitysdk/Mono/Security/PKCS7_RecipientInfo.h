#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x1C4AFE90)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C4AFC90)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_OID_OFFSET UNITYSDK_OFFSET(0x1C4AFC80)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SERIAL_OFFSET UNITYSDK_OFFSET(0x1C4AFEA0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C4AFD90)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C4AFFA0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4AFA80)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AFA70)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_RecipientInfo_TypeDefinitionIndex = 2280;

	class PKCS7_RecipientInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _serial; // 0x10
		::System::String* _oid; // 0x18
		::Il2CppArray<::System::Byte>* _ski; // 0x20
		::System::String* _issuer; // 0x28
		::Il2CppArray<::System::Byte>* _key; // 0x30
		::System::Int32 _version; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::String* get_Oid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_OID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_KEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectKeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::System::String* get_Issuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_ISSUER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Serial()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SERIAL_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_VERSION_OFFSET))(this);
		}
	};
}

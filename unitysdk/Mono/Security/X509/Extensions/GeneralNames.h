#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F7B6CD0)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_DIRECTORYNAMES_OFFSET UNITYSDK_OFFSET(0x1F7B69D0)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_DNSNAMES_OFFSET UNITYSDK_OFFSET(0x1F7B6A90)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_IPADDRESSES_OFFSET UNITYSDK_OFFSET(0x1F7B6C10)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_RFC822_OFFSET UNITYSDK_OFFSET(0x1F7B6910)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_UNIFORMRESOURCEIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x1F7B6B50)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7B6D00)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7B5330)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F7B6010)
#define MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B5320)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int GeneralNames_TypeDefinitionIndex = 2334;

	class GeneralNames : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* ipAddr; // 0x10
		::Mono::Security::ASN1* asn; // 0x18
		::System::Collections::ArrayList* dnsName; // 0x20
		::System::Collections::ArrayList* rfc822Name; // 0x28
		::System::Collections::ArrayList* directoryNames; // 0x30
		::System::Collections::ArrayList* uris; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* rfc822s, ::Il2CppArray<::System::String*>* dnsNames, ::Il2CppArray<::System::String*>* ipAddresses, ::Il2CppArray<::System::String*>* uris)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_1_OFFSET))(this, rfc822s, dnsNames, ipAddresses, uris);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1* sequence)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES__CTOR_2_OFFSET))(this, sequence);
		}

		::Il2CppArray<::System::String*>* get_RFC822()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_RFC822_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_DirectoryNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_DIRECTORYNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_DNSNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_DNSNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UniformResourceIdentifiers()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_UNIFORMRESOURCEIDENTIFIERS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_IPAddresses()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GET_IPADDRESSES_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_GETBYTES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_GENERALNAMES_TOSTRING_OFFSET))(this);
		}
	};
}

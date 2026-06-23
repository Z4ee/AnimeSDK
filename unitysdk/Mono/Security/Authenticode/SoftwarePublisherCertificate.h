#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class PKCS7_SignedData; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1E4D4D00)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E4D4B70)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E4D4B30)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GET_CRLS_OFFSET UNITYSDK_OFFSET(0x1E4D4B50)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_PEM_OFFSET UNITYSDK_OFFSET(0x1E4D4F90)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D4950)
#define MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D48E0)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int SoftwarePublisherCertificate_TypeDefinitionIndex = 2479;

	class SoftwarePublisherCertificate : public ::System::Object
	{
	public:
		// static const ::System::String* header; // 0x0
		// static const ::System::String* footer; // 0x0
		::Mono::Security::PKCS7_SignedData* pkcs7; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE__CTOR_1_OFFSET))(this, data);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Crls()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GET_CRLS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_GETBYTES_OFFSET))(this);
		}

		static ::Mono::Security::Authenticode::SoftwarePublisherCertificate* CreateFromFile(::System::String* filename)
		{
			return ((::Mono::Security::Authenticode::SoftwarePublisherCertificate*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_CREATEFROMFILE_OFFSET))(filename);
		}

		static ::Il2CppArray<::System::Byte>* PEM(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_SOFTWAREPUBLISHERCERTIFICATE_PEM_OFFSET))(data);
		}
	};
}

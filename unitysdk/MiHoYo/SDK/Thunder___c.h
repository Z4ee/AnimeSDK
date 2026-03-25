#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MIHOYO_SDK_THUNDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x859C580)
#define MIHOYO_SDK_THUNDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x859C5B0)
#define MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET UNITYSDK_OFFSET(0x859C5D0)
#define MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x859C5C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Thunder___c_TypeDefinitionIndex = 37050;

	class Thunder___c : public ::System::Object
	{
	public:
		static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__17_0()
		{
			return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x16660);
		}
		static ::MiHoYo::SDK::Thunder___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Thunder___c**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x16668);
		}
		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x16670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__17_0(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET))(this, sender, certificate, chain, sslPolicyErrors);
		}

		::System::Void _Notify_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET))(this);
		}
	};
}

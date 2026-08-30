#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MIHOYO_SDK_THUNDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD3E640)
#define MIHOYO_SDK_THUNDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3E670)
#define MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET UNITYSDK_OFFSET(0x1CD3E690)
#define MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CD3E680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Thunder___c_TypeDefinitionIndex = 46746;

	class Thunder___c : public ::System::Object
	{
	public:
		static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__17_0()
		{
			return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x5DBF0);
		}
		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x5DBF8);
		}
		static ::MiHoYo::SDK::Thunder___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Thunder___c**)Il2CppClass::FromTypeDefinitionIndex(Thunder___c_TypeDefinitionIndex)->GetStaticField(0x5DC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__17_0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Notify_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET))(this);
		}
	};
}

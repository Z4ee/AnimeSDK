#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_2_6CAC28ACDD58FF63___C_METHOD_1_EA79D5F7C12B6F7D_1_OFFSET UNITYSDK_OFFSET(0x14C90C70)
#define CLASS_2_6CAC28ACDD58FF63___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET UNITYSDK_OFFSET(0x14C90C60)
#define CLASS_2_6CAC28ACDD58FF63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C90C10)
#define CLASS_2_6CAC28ACDD58FF63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C90C50)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63___c_TypeDefinitionIndex = 47173;

class Class_2_6CAC28ACDD58FF63___c : public ::System::Object
{
public:
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__90_1()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63___c_TypeDefinitionIndex)->GetStaticField(0x31720);
	}
	static ::Class_2_6CAC28ACDD58FF63___c** StaticGet___9()
	{
		return (::Class_2_6CAC28ACDD58FF63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63___c_TypeDefinitionIndex)->GetStaticField(0x31728);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__89_1()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63___c_TypeDefinitionIndex)->GetStaticField(0x31730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EA79D5F7C12B6F7D(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EA79D5F7C12B6F7D_1(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63___C_METHOD_1_EA79D5F7C12B6F7D_1_OFFSET))(this, a1, a2, a3, a4);
	}
};

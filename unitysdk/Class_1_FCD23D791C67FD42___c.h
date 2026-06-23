#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_1_FCD23D791C67FD42___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x114F0A90)
#define CLASS_1_FCD23D791C67FD42___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET UNITYSDK_OFFSET(0x114F0AA0)
#define CLASS_1_FCD23D791C67FD42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114F0A40)
#define CLASS_1_FCD23D791C67FD42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114F0A80)

inline static constexpr unsigned int Class_1_FCD23D791C67FD42___c_TypeDefinitionIndex = 81584;

class Class_1_FCD23D791C67FD42___c : public ::System::Object
{
public:
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__130_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCD23D791C67FD42___c_TypeDefinitionIndex)->GetStaticField(0x3B770);
	}
	static ::Class_1_FCD23D791C67FD42___c** StaticGet___9()
	{
		return (::Class_1_FCD23D791C67FD42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCD23D791C67FD42___c_TypeDefinitionIndex)->GetStaticField(0x3B778);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__109_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCD23D791C67FD42___c_TypeDefinitionIndex)->GetStaticField(0x3B780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA79D5F7C12B6F7D(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET))(this, a1, a2, a3, a4);
	}
};

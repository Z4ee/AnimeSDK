#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class Class_1_E40337C55D87F197;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_2_54CCD44980580DB7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D48280)
#define CLASS_2_54CCD44980580DB7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D482B0)
#define CLASS_2_54CCD44980580DB7___C__GET_FAILURECOUNT_B__47_0_OFFSET UNITYSDK_OFFSET(0x18D48320)
#define CLASS_2_54CCD44980580DB7___C__GET_FINISHCOUNT_B__49_0_OFFSET UNITYSDK_OFFSET(0x18D48340)
#define CLASS_2_54CCD44980580DB7___C__GET_SUCCESSCOUNT_B__45_0_OFFSET UNITYSDK_OFFSET(0x18D48300)
#define CLASS_2_54CCD44980580DB7___C___CHECKIPV6STATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x18D482C0)
#define CLASS_2_54CCD44980580DB7___C___GETWEBRESPONSE_B__25_0_OFFSET UNITYSDK_OFFSET(0x18D482F0)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c_TypeDefinitionIndex = 59737;

class Class_2_54CCD44980580DB7___c : public ::System::Object
{
public:
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__25_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64350);
	}
	static ::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64358);
	}
	static ::Class_2_54CCD44980580DB7___c** StaticGet___9()
	{
		return (::Class_2_54CCD44980580DB7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64360);
	}
	static ::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64368);
	}
	static ::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>** StaticGet___9__45_0()
	{
		return (::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64370);
	}
	static ::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>** StaticGet___9__47_0()
	{
		return (::System::Func_2<::Class_1_E40337C55D87F197*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x64378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckIPV6State_b__13_0(::System::Net::IPEndPoint* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C___CHECKIPV6STATE_B__13_0_OFFSET))(this, a1);
	}

	::System::Boolean __GetWebResponse_b__25_0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C___GETWEBRESPONSE_B__25_0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean _get_SuccessCount_b__45_0(::Class_1_E40337C55D87F197* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E40337C55D87F197*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_SUCCESSCOUNT_B__45_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_FailureCount_b__47_0(::Class_1_E40337C55D87F197* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E40337C55D87F197*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_FAILURECOUNT_B__47_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_FinishCount_b__49_0(::Class_1_E40337C55D87F197* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E40337C55D87F197*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_FINISHCOUNT_B__49_0_OFFSET))(this, a1);
	}
};

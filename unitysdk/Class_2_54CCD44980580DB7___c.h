#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class Class_1_AAE3CF8472BB8C9A;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_2_54CCD44980580DB7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D197D0)
#define CLASS_2_54CCD44980580DB7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D19800)
#define CLASS_2_54CCD44980580DB7___C__GET_FAILURECOUNT_B__47_0_OFFSET UNITYSDK_OFFSET(0x8D19870)
#define CLASS_2_54CCD44980580DB7___C__GET_FINISHCOUNT_B__49_0_OFFSET UNITYSDK_OFFSET(0x8D19890)
#define CLASS_2_54CCD44980580DB7___C__GET_SUCCESSCOUNT_B__45_0_OFFSET UNITYSDK_OFFSET(0x8D19850)
#define CLASS_2_54CCD44980580DB7___C___CHECKIPV6STATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x8D19810)
#define CLASS_2_54CCD44980580DB7___C___GETWEBRESPONSE_B__25_0_OFFSET UNITYSDK_OFFSET(0x8D19840)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c_TypeDefinitionIndex = 48233;

class Class_2_54CCD44980580DB7___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122B0);
	}
	static ::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122B8);
	}
	static ::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>** StaticGet___9__45_0()
	{
		return (::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122C0);
	}
	static ::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>** StaticGet___9__47_0()
	{
		return (::System::Func_2<::Class_1_AAE3CF8472BB8C9A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122C8);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__25_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122D0);
	}
	static ::Class_2_54CCD44980580DB7___c** StaticGet___9()
	{
		return (::Class_2_54CCD44980580DB7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54CCD44980580DB7___c_TypeDefinitionIndex)->GetStaticField(0x122D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckIPV6State_b__13_0(::System::Net::IPEndPoint* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C___CHECKIPV6STATE_B__13_0_OFFSET))(this, e);
	}

	::System::Boolean __GetWebResponse_b__25_0(::System::Object* _p0_, ::System::Security::Cryptography::X509Certificates::X509Certificate* _p1_, ::System::Security::Cryptography::X509Certificates::X509Chain* _p2_, ::System::Net::Security::SslPolicyErrors _p3_)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C___GETWEBRESPONSE_B__25_0_OFFSET))(this, _p0_, _p1_, _p2_, _p3_);
	}

	::System::Boolean _get_SuccessCount_b__45_0(::Class_1_AAE3CF8472BB8C9A* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AAE3CF8472BB8C9A*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_SUCCESSCOUNT_B__45_0_OFFSET))(this, e);
	}

	::System::Boolean _get_FailureCount_b__47_0(::Class_1_AAE3CF8472BB8C9A* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AAE3CF8472BB8C9A*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_FAILURECOUNT_B__47_0_OFFSET))(this, e);
	}

	::System::Boolean _get_FinishCount_b__49_0(::Class_1_AAE3CF8472BB8C9A* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AAE3CF8472BB8C9A*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__GET_FINISHCOUNT_B__49_0_OFFSET))(this, e);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_1_9B1573C48BB491FD___C_METHOD_1_17CE5DC43DC9A9D3_1_OFFSET UNITYSDK_OFFSET(0x15171500)
#define CLASS_1_9B1573C48BB491FD___C_METHOD_1_17CE5DC43DC9A9D3_OFFSET UNITYSDK_OFFSET(0x151714E0)
#define CLASS_1_9B1573C48BB491FD___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15171520)
#define CLASS_1_9B1573C48BB491FD___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET UNITYSDK_OFFSET(0x15171530)
#define CLASS_1_9B1573C48BB491FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15171490)
#define CLASS_1_9B1573C48BB491FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151714D0)

inline static constexpr unsigned int Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex = 68654;

class Class_1_9B1573C48BB491FD___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::System::Boolean>** StaticGet___9__100_0()
	{
		return (::System::Func_2<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex)->GetStaticField(0x4C5D0);
	}
	static ::Class_1_9B1573C48BB491FD___c** StaticGet___9()
	{
		return (::Class_1_9B1573C48BB491FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex)->GetStaticField(0x4C5D8);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__121_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex)->GetStaticField(0x4C5E0);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__102_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex)->GetStaticField(0x4C5E8);
	}
	static ::System::Func_2<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::System::Boolean>** StaticGet___9__101_0()
	{
		return (::System::Func_2<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B1573C48BB491FD___c_TypeDefinitionIndex)->GetStaticField(0x4C5F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_17CE5DC43DC9A9D3(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C_METHOD_1_17CE5DC43DC9A9D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_17CE5DC43DC9A9D3_1(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C_METHOD_1_17CE5DC43DC9A9D3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA79D5F7C12B6F7D(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET))(this, a1, a2, a3, a4);
	}
};

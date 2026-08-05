#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_1_OFFSET UNITYSDK_OFFSET(0x1345DD30)
#define CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_2_OFFSET UNITYSDK_OFFSET(0x1345DD80)
#define CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_OFFSET UNITYSDK_OFFSET(0x1345DCF0)
#define CLASS_2_98CC9643C32C6170___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET UNITYSDK_OFFSET(0x1345DD70)
#define CLASS_2_98CC9643C32C6170___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1345DCA0)
#define CLASS_2_98CC9643C32C6170___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1345DCE0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170___c_TypeDefinitionIndex = 58112;

class Class_2_98CC9643C32C6170___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98CC9643C32C6170___c_TypeDefinitionIndex)->GetStaticField(0x413B0);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__13_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98CC9643C32C6170___c_TypeDefinitionIndex)->GetStaticField(0x413B8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98CC9643C32C6170___c_TypeDefinitionIndex)->GetStaticField(0x413C0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98CC9643C32C6170___c_TypeDefinitionIndex)->GetStaticField(0x413C8);
	}
	static ::Class_2_98CC9643C32C6170___c** StaticGet___9()
	{
		return (::Class_2_98CC9643C32C6170___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98CC9643C32C6170___c_TypeDefinitionIndex)->GetStaticField(0x413D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_95D6B834F49F7658(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_OFFSET))(this, a1);
	}

	::System::String* Method_1_95D6B834F49F7658_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA79D5F7C12B6F7D(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C_METHOD_1_EA79D5F7C12B6F7D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_95D6B834F49F7658_2(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170___C_METHOD_1_95D6B834F49F7658_2_OFFSET))(this, a1);
	}
};

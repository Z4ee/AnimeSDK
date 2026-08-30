#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_92D006258A454033_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB5C4620)
#define CLASS_2_92D006258A454033_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB5C4730)
#define CLASS_2_92D006258A454033_METHOD_2_51C3FB4A34742D14_OFFSET UNITYSDK_OFFSET(0xB5C47F0)
#define CLASS_2_92D006258A454033_METHOD_2_92DB2F35C113FEE0_OFFSET UNITYSDK_OFFSET(0xB5C43C0)
#define CLASS_2_92D006258A454033__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5C4900)
#define CLASS_2_92D006258A454033__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C48D0)
#define CLASS_2_92D006258A454033__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5C4870)

inline static constexpr unsigned int Class_2_92D006258A454033_TypeDefinitionIndex = 71853;

class Class_2_92D006258A454033 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Int32* StaticGet_MDFDDIKBIDN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146C0);
	}
	static ::System::Int32* StaticGet_DNOPAFEDOEI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146C4);
	}
	static ::System::Int32* StaticGet_KGJMKFNLNJH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146C8);
	}
	static ::System::Int32* StaticGet_DBPKOEBFFPN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146CC);
	}
	static ::System::Int32* StaticGet_NNEDNCCBFGJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146D0);
	}
	static ::System::Int32* StaticGet_BLKKJGAPANB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0x146D4);
	}
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::RPG::Client::CyreneSPPointState DLNIGFGLPLJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__CCTOR_OFFSET))();
	}

	::System::Void Method_2_92DB2F35C113FEE0(::RPG::Client::CyreneSPPointState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CyreneSPPointState))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_92DB2F35C113FEE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_51C3FB4A34742D14(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_51C3FB4A34742D14_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__ONBIND_OFFSET))(this);
	}
};

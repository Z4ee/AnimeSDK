#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_92D006258A454033_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12AB7760)
#define CLASS_2_92D006258A454033_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12AB7870)
#define CLASS_2_92D006258A454033_METHOD_2_51C3FB4A34742D14_OFFSET UNITYSDK_OFFSET(0x12AB7930)
#define CLASS_2_92D006258A454033_METHOD_2_92DB2F35C113FEE0_OFFSET UNITYSDK_OFFSET(0x12AB7500)
#define CLASS_2_92D006258A454033__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AB7A40)
#define CLASS_2_92D006258A454033__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB7A10)
#define CLASS_2_92D006258A454033__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AB79B0)
#define CLASS_2_92D006258A454033___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AB7B10)

inline static constexpr unsigned int Class_2_92D006258A454033_TypeDefinitionIndex = 66263;

class Class_2_92D006258A454033 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF400);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF404);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF408);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF40C);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF410);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF414);
	}
	::UnityEngine::Animator* Field_2_1; // 0x60
	::RPG::Client::CyreneSPPointState Field_2_0; // 0x68

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

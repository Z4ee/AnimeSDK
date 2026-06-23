#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_B703A6361B6C6F93___C_METHOD_1_97428D6179B1CFD2_OFFSET UNITYSDK_OFFSET(0x125B31E0)
#define CLASS_2_B703A6361B6C6F93___C_METHOD_1_EECA3E84CCDC55C4_OFFSET UNITYSDK_OFFSET(0x125B32B0)
#define CLASS_2_B703A6361B6C6F93___C_METHOD_1_F4DAB1FE9C06001E_OFFSET UNITYSDK_OFFSET(0x125B3100)
#define CLASS_2_B703A6361B6C6F93___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B30B0)
#define CLASS_2_B703A6361B6C6F93___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125B30F0)

inline static constexpr unsigned int Class_2_B703A6361B6C6F93___c_TypeDefinitionIndex = 45237;

class Class_2_B703A6361B6C6F93___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B703A6361B6C6F93___c_TypeDefinitionIndex)->GetStaticField(0x33180);
	}
	static ::Class_2_B703A6361B6C6F93___c** StaticGet___9()
	{
		return (::Class_2_B703A6361B6C6F93___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B703A6361B6C6F93___c_TypeDefinitionIndex)->GetStaticField(0x33188);
	}
	static ::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__11_4()
	{
		return (::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B703A6361B6C6F93___c_TypeDefinitionIndex)->GetStaticField(0x33190);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B703A6361B6C6F93___c_TypeDefinitionIndex)->GetStaticField(0x33198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B703A6361B6C6F93___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B703A6361B6C6F93___C__CTOR_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_1_F4DAB1FE9C06001E(::System::Int32 a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B703A6361B6C6F93___C_METHOD_1_F4DAB1FE9C06001E_OFFSET))(this, a1);
	}

	::System::Void Method_1_97428D6179B1CFD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B703A6361B6C6F93___C_METHOD_1_97428D6179B1CFD2_OFFSET))(this);
	}

	::System::Boolean Method_1_EECA3E84CCDC55C4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B703A6361B6C6F93___C_METHOD_1_EECA3E84CCDC55C4_OFFSET))(this);
	}
};

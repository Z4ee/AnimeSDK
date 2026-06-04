#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_E23930726FE443EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E23930726FE443EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1449EDD0)
#define CLASS_2_E23930726FE443EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1449EE00)
#define CLASS_2_E23930726FE443EC___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET UNITYSDK_OFFSET(0x1449EE10)
#define CLASS_2_E23930726FE443EC___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET UNITYSDK_OFFSET(0x1449EE40)

inline static constexpr unsigned int Class_2_E23930726FE443EC___c_TypeDefinitionIndex = 71609;

class Class_2_E23930726FE443EC___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__4_1()
	{
		return (::System::Action_3<::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E23930726FE443EC___c_TypeDefinitionIndex)->GetStaticField(0x45380);
	}
	static ::System::Action_3<::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__4_0()
	{
		return (::System::Action_3<::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E23930726FE443EC___c_TypeDefinitionIndex)->GetStaticField(0x45388);
	}
	static ::Class_2_E23930726FE443EC___c** StaticGet___9()
	{
		return (::Class_2_E23930726FE443EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E23930726FE443EC___c_TypeDefinitionIndex)->GetStaticField(0x45390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitDestructibleProp_b__4_0(::Class_2_E23930726FE443EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __InitDestructibleProp_b__4_1(::Class_2_E23930726FE443EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E23930726FE443EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET))(this, a1, a2, a3);
	}
};

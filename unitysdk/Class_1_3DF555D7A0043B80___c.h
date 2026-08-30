#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DF555D7A0043B80;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_3DF555D7A0043B80___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1703A160)
#define CLASS_1_3DF555D7A0043B80___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1703A190)
#define CLASS_1_3DF555D7A0043B80___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0x1703A1A0)
#define CLASS_1_3DF555D7A0043B80___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0x1703A1D0)

inline static constexpr unsigned int Class_1_3DF555D7A0043B80___c_TypeDefinitionIndex = 76608;

class Class_1_3DF555D7A0043B80___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF555D7A0043B80___c_TypeDefinitionIndex)->GetStaticField(0x59FB0);
	}
	static ::System::Action_3<::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
	{
		return (::System::Action_3<::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF555D7A0043B80___c_TypeDefinitionIndex)->GetStaticField(0x59FB8);
	}
	static ::Class_1_3DF555D7A0043B80___c** StaticGet___9()
	{
		return (::Class_1_3DF555D7A0043B80___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF555D7A0043B80___c_TypeDefinitionIndex)->GetStaticField(0x59FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF555D7A0043B80___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF555D7A0043B80___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployDashOrbTrigger_b__9_0(::Class_1_3DF555D7A0043B80* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3DF555D7A0043B80___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __DeployDashOrbTrigger_b__9_1(::Class_1_3DF555D7A0043B80* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DF555D7A0043B80*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3DF555D7A0043B80___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET))(this, a1, a2, a3);
	}
};

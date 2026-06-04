#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_30AB95762AC3F951;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_30AB95762AC3F951___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB05C110)
#define CLASS_1_30AB95762AC3F951___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB05C150)
#define CLASS_1_30AB95762AC3F951___C___DEPLOYSIMPLEHITBOXTRIGGER_B__7_0_OFFSET UNITYSDK_OFFSET(0xB05C160)
#define CLASS_1_30AB95762AC3F951___C___DEPLOYSIMPLEHITBOXTRIGGER_B__7_1_OFFSET UNITYSDK_OFFSET(0xB05C190)

inline static constexpr unsigned int Class_1_30AB95762AC3F951___c_TypeDefinitionIndex = 71678;

class Class_1_30AB95762AC3F951___c : public ::System::Object
{
public:
	static ::Class_1_30AB95762AC3F951___c** StaticGet___9()
	{
		return (::Class_1_30AB95762AC3F951___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB95762AC3F951___c_TypeDefinitionIndex)->GetStaticField(0x4A3A0);
	}
	static ::System::Action_3<::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__7_1()
	{
		return (::System::Action_3<::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB95762AC3F951___c_TypeDefinitionIndex)->GetStaticField(0x4A3A8);
	}
	static ::System::Action_3<::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__7_0()
	{
		return (::System::Action_3<::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB95762AC3F951___c_TypeDefinitionIndex)->GetStaticField(0x4A3B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30AB95762AC3F951___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AB95762AC3F951___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySimpleHitBoxTrigger_b__7_0(::Class_1_30AB95762AC3F951* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_30AB95762AC3F951___C___DEPLOYSIMPLEHITBOXTRIGGER_B__7_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __DeploySimpleHitBoxTrigger_b__7_1(::Class_1_30AB95762AC3F951* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30AB95762AC3F951*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_30AB95762AC3F951___C___DEPLOYSIMPLEHITBOXTRIGGER_B__7_1_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3156BC50983DCF53;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_3156BC50983DCF53___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12802CC0)
#define CLASS_1_3156BC50983DCF53___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12802D00)
#define CLASS_1_3156BC50983DCF53___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0x12802D10)
#define CLASS_1_3156BC50983DCF53___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0x12802D40)

inline static constexpr unsigned int Class_1_3156BC50983DCF53___c_TypeDefinitionIndex = 70787;

class Class_1_3156BC50983DCF53___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3156BC50983DCF53___c_TypeDefinitionIndex)->GetStaticField(0x177D0);
	}
	static ::Class_1_3156BC50983DCF53___c** StaticGet___9()
	{
		return (::Class_1_3156BC50983DCF53___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3156BC50983DCF53___c_TypeDefinitionIndex)->GetStaticField(0x177D8);
	}
	static ::System::Action_3<::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
	{
		return (::System::Action_3<::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3156BC50983DCF53___c_TypeDefinitionIndex)->GetStaticField(0x177E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployDashOrbTrigger_b__9_0(::Class_1_3156BC50983DCF53* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployDashOrbTrigger_b__9_1(::Class_1_3156BC50983DCF53* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3156BC50983DCF53*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET))(this, self, ent, other);
	}
};

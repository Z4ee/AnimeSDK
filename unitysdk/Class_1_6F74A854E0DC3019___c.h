#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6F74A854E0DC3019;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_6F74A854E0DC3019___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B625C0)
#define CLASS_1_6F74A854E0DC3019___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B625F0)
#define CLASS_1_6F74A854E0DC3019___C___DEPLOYBORDERPLAT_B__5_0_OFFSET UNITYSDK_OFFSET(0x8B62600)
#define CLASS_1_6F74A854E0DC3019___C___DEPLOYBORDERPLAT_B__5_1_OFFSET UNITYSDK_OFFSET(0x8B62630)

inline static constexpr unsigned int Class_1_6F74A854E0DC3019___c_TypeDefinitionIndex = 62753;

class Class_1_6F74A854E0DC3019___c : public ::System::Object
{
public:
	static ::Class_1_6F74A854E0DC3019___c** StaticGet___9()
	{
		return (::Class_1_6F74A854E0DC3019___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F74A854E0DC3019___c_TypeDefinitionIndex)->GetStaticField(0x477B0);
	}
	static ::System::Action_3<::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
	{
		return (::System::Action_3<::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F74A854E0DC3019___c_TypeDefinitionIndex)->GetStaticField(0x477B8);
	}
	static ::System::Action_3<::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F74A854E0DC3019___c_TypeDefinitionIndex)->GetStaticField(0x477C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployBorderPlat_b__5_0(::Class_1_6F74A854E0DC3019* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019___C___DEPLOYBORDERPLAT_B__5_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployBorderPlat_b__5_1(::Class_1_6F74A854E0DC3019* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F74A854E0DC3019*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019___C___DEPLOYBORDERPLAT_B__5_1_OFFSET))(this, self, ent, other);
	}
};

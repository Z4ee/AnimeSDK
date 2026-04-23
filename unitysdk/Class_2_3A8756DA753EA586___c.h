#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3A8756DA753EA586;
class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_3A8756DA753EA586___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117F29D0)
#define CLASS_2_3A8756DA753EA586___C__CTOR_OFFSET UNITYSDK_OFFSET(0x117F2A00)
#define CLASS_2_3A8756DA753EA586___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0x117F2A10)
#define CLASS_2_3A8756DA753EA586___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x117F2A30)
#define CLASS_2_3A8756DA753EA586___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x117F2A80)
#define CLASS_2_3A8756DA753EA586___C___FIREARROWINTERACTEFFECTDELAYED_B__22_0_OFFSET UNITYSDK_OFFSET(0x117F2AD0)

inline static constexpr unsigned int Class_2_3A8756DA753EA586___c_TypeDefinitionIndex = 70835;

class Class_2_3A8756DA753EA586___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A8756DA753EA586___c_TypeDefinitionIndex)->GetStaticField(0x22EF0);
	}
	static ::System::Action_3<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A8756DA753EA586___c_TypeDefinitionIndex)->GetStaticField(0x22EF8);
	}
	static ::System::Action_4<::Class_2_3A8756DA753EA586*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3>** StaticGet___9__22_0()
	{
		return (::System::Action_4<::Class_2_3A8756DA753EA586*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A8756DA753EA586___c_TypeDefinitionIndex)->GetStaticField(0x22F00);
	}
	static ::System::Action_3<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A8756DA753EA586___c_TypeDefinitionIndex)->GetStaticField(0x22F08);
	}
	static ::Class_2_3A8756DA753EA586___c** StaticGet___9()
	{
		return (::Class_2_3A8756DA753EA586___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A8756DA753EA586___c_TypeDefinitionIndex)->GetStaticField(0x22F10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateInteractTrigger_b__6_0(::Class_2_3A8756DA753EA586* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET))(this, self, ent);
	}

	::System::Void __CreatePropMoveTrigger_b__8_0(::Class_2_3A8756DA753EA586* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* col)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET))(this, self, ent, col);
	}

	::System::Void __CreatePropMoveTrigger_b__8_1(::Class_2_3A8756DA753EA586* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* col)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3A8756DA753EA586*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET))(this, self, ent, col);
	}

	::System::Void __FireArrowInteractEffectDelayed_b__22_0(::Class_2_3A8756DA753EA586* self, ::UnityEngine::Vector3 pos, ::Entitas::IEntity* ent, ::Struct_2_4127FF4C06B070D3 param)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3A8756DA753EA586*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_3A8756DA753EA586___C___FIREARROWINTERACTEFFECTDELAYED_B__22_0_OFFSET))(this, self, pos, ent, param);
	}
};

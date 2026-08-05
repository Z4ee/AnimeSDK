#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x17395990)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EMPTY_OFFSET UNITYSDK_OFFSET(0x17397E20)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17395CB0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x17396500)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_07B56056592A0B82_OFFSET UNITYSDK_OFFSET(0x17399C60)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x173993C0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_188D98AFDB04C63A_OFFSET UNITYSDK_OFFSET(0x1739A0E0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_21420C3A518FE4D4_OFFSET UNITYSDK_OFFSET(0x17398A90)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_248AD36E7E6FC042_OFFSET UNITYSDK_OFFSET(0x17399010)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x173959E0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_32843F0289E680DD_OFFSET UNITYSDK_OFFSET(0x173997C0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3AA2881C6A163F67_OFFSET UNITYSDK_OFFSET(0x17398D40)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3D89102E85987FAC_OFFSET UNITYSDK_OFFSET(0x173999B0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3F0A3244A0CDB239_OFFSET UNITYSDK_OFFSET(0x17396090)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_42C7405E20F2CD20_OFFSET UNITYSDK_OFFSET(0x17397C80)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_4FC12403C7B9FB27_OFFSET UNITYSDK_OFFSET(0x173989F0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_5A7452A438FA8612_OFFSET UNITYSDK_OFFSET(0x173966C0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_63D530200451EFC6_OFFSET UNITYSDK_OFFSET(0x17398560)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_6F6C606E49B1CA89_OFFSET UNITYSDK_OFFSET(0x17398E20)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_71E38F71B606F440_1_OFFSET UNITYSDK_OFFSET(0x173996D0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_71E38F71B606F440_OFFSET UNITYSDK_OFFSET(0x17399740)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_83970DB21075DE54_OFFSET UNITYSDK_OFFSET(0x17398C40)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_8B6FDA016AF88B3C_OFFSET UNITYSDK_OFFSET(0x17396A60)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_969F06001C36DCB7_OFFSET UNITYSDK_OFFSET(0x173988D0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x17396430)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_AD9F071724804EBE_OFFSET UNITYSDK_OFFSET(0x17399930)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_EEB8F54E3EE5C262_OFFSET UNITYSDK_OFFSET(0x17399450)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_F356CEEA92A146D8_OFFSET UNITYSDK_OFFSET(0x17397730)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17398120)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17397F30)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x173979C0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_TRYGETMAINGAMEOBJECTSAFELY_OFFSET UNITYSDK_OFFSET(0x17398200)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17398450)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x17398320)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTriggerEventSubProxy_TypeDefinitionIndex = 43825;

	class MonoTriggerEventSubProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_5_7()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3C700);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_5_20()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3C708);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_5_6()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3C710);
		}
		static ::System::Boolean* StaticGet_enableSweepTrigger()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0xE240);
		}
		// static const ::System::Int32 Field_5_2 = 0x40; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		// static const ::System::Int32 Field_5_0 = 0x2; // 0x0
		::UnityEngine::GameObject* parentEntity; // 0x18
		::UnityEngine::LayerMask sweepLayerMask; // 0x20
		::System::Single minSweepDistance; // 0x24
		::System::Int32 sweepReenterCooldownFixedFrames; // 0x28
		::UnityEngine::Transform* Field_5_8; // 0x30
		::UnityEngine::Collider* Field_5_15; // 0x38
		::UnityEngine::Vector3 Field_5_14; // 0x40
		::System::Boolean Field_5_13; // 0x4C
		::Il2CppArray<::MoleMole::MonoTriggerEventDispatcher*>* Field_5_12; // 0x50
		::Il2CppArray<::UnityEngine::Collider*>* Field_5_19; // 0x58
		::Il2CppArray<::System::Int32>* Field_5_18; // 0x60
		::System::Int32 Field_5_17; // 0x68
		::Il2CppArray<::System::Int32>* Field_5_16; // 0x70
		::Il2CppArray<::System::Int32>* Field_5_23; // 0x78
		::System::Int32 Field_5_22; // 0x80
		::System::Int32 Field_5_21; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EMPTY_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONDISABLE_OFFSET))(this);
		}

		static ::System::Boolean TryGetMainGameObjectSafely(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_TRYGETMAINGAMEOBJECTSAFELY_OFFSET))(a1, a2);
		}

		::System::Boolean Method_5_63D530200451EFC6(::UnityEngine::Collider* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_63D530200451EFC6_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_248AD36E7E6FC042(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Vector3& a7, ::System::Single& a8)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_248AD36E7E6FC042_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Single Method_5_71E38F71B606F440(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_71E38F71B606F440_OFFSET))(a1, a2);
		}

		::System::Void Method_5_32843F0289E680DD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_32843F0289E680DD_OFFSET))(this, a1);
		}

		static ::System::Single Method_5_AD9F071724804EBE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_AD9F071724804EBE_OFFSET))(a1);
		}

		::System::Void Method_5_5A7452A438FA8612()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_5A7452A438FA8612_OFFSET))(this);
		}

		static ::System::Boolean Method_5_4FC12403C7B9FB27(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_4FC12403C7B9FB27_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_42C7405E20F2CD20(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_42C7405E20F2CD20_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 Method_5_EEB8F54E3EE5C262(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_EEB8F54E3EE5C262_OFFSET))(a1, a2);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_3D89102E85987FAC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3D89102E85987FAC_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 Method_5_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_10867B69EFBCA83E_OFFSET))(a1);
		}

		::System::Int32 Method_5_8B6FDA016AF88B3C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_8B6FDA016AF88B3C_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_188D98AFDB04C63A()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_188D98AFDB04C63A_OFFSET))(this);
		}

		::System::Boolean Method_5_6F6C606E49B1CA89(::MoleMole::MonoTriggerEventDispatcher* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_6F6C606E49B1CA89_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_AA169839CB93802A_OFFSET))(this);
		}

		static ::System::Single Method_5_71E38F71B606F440_1(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_71E38F71B606F440_1_OFFSET))(a1, a2);
		}

		::System::Boolean Method_5_07B56056592A0B82(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_07B56056592A0B82_OFFSET))(this, a1);
		}

		::System::Void Method_5_83970DB21075DE54(::System::Int32 a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_83970DB21075DE54_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_969F06001C36DCB7(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_969F06001C36DCB7_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_21420C3A518FE4D4(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_21420C3A518FE4D4_OFFSET))(this, a1);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_3F0A3244A0CDB239()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3F0A3244A0CDB239_OFFSET))(this);
		}

		::System::Boolean Method_5_3AA2881C6A163F67(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_3AA2881C6A163F67_OFFSET))(this, a1);
		}

		::System::Void Method_5_F356CEEA92A146D8(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_METHOD_5_F356CEEA92A146D8_OFFSET))(this, a1);
		}
	};
}

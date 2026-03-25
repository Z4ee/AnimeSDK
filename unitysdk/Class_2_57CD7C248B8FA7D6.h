#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54715B955DC6C855.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_441;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_57CD7C248B8FA7D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11125920)
#define CLASS_2_57CD7C248B8FA7D6_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11125E00)
#define CLASS_2_57CD7C248B8FA7D6_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x11125F10)
#define CLASS_2_57CD7C248B8FA7D6_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x11125E40)
#define CLASS_2_57CD7C248B8FA7D6_GET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x11125EF0)
#define CLASS_2_57CD7C248B8FA7D6_GET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0x11125E20)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_099BABCC29F69C12_OFFSET UNITYSDK_OFFSET(0x11125550)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11126160)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_40DD63259E29E9BE_OFFSET UNITYSDK_OFFSET(0x11125FE0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11125D60)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_466B634F34D74401_OFFSET UNITYSDK_OFFSET(0x11126000)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x11123C50)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_67FB6B6F658DE240_OFFSET UNITYSDK_OFFSET(0x11122C10)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x11123CE0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_7581BA71F2C87672_OFFSET UNITYSDK_OFFSET(0x11125F30)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x11125E50)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_8992DB23C45DED63_OFFSET UNITYSDK_OFFSET(0x111242B0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x11123690)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_8D4118C8A6074696_OFFSET UNITYSDK_OFFSET(0x11122BA0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11125F40)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_ACB5822DA446E536_OFFSET UNITYSDK_OFFSET(0x111237A0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_B47691793BE46FF4_OFFSET UNITYSDK_OFFSET(0x11122720)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x111259D0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11125D20)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x11123EA0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x11125C00)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_E1EC278FED9EEBB3_OFFSET UNITYSDK_OFFSET(0x11123FE0)
#define CLASS_2_57CD7C248B8FA7D6_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x11122970)
#define CLASS_2_57CD7C248B8FA7D6_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11125E10)
#define CLASS_2_57CD7C248B8FA7D6_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x11125F20)
#define CLASS_2_57CD7C248B8FA7D6_SET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x11125F00)
#define CLASS_2_57CD7C248B8FA7D6_SET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0x11125E30)
#define CLASS_2_57CD7C248B8FA7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x11122650)
#define CLASS_2_57CD7C248B8FA7D6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111260C0)

inline static constexpr unsigned int Class_2_57CD7C248B8FA7D6_TypeDefinitionIndex = 45973;

class Class_2_57CD7C248B8FA7D6 : public ::Class_1_54715B955DC6C855
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::System::Action_1<::System::Single>* _OnUpdate_k__BackingField; // 0x160
	::Class_0_16E4307DCC419505_441* Field_2_7; // 0x168
	::System::Boolean _UseRigidbody_k__BackingField; // 0x170
	::System::Single _RootMotionScale_k__BackingField; // 0x174
	::System::Nullable_1<::System::Single> _OverrideMoveDeltaPositionOtherDirectionConstraint_k__BackingField; // 0x178

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B47691793BE46FF4(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_B47691793BE46FF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_2_8D4118C8A6074696(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_8D4118C8A6074696_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_67FB6B6F658DE240(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_67FB6B6F658DE240_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_ACB5822DA446E536(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_ACB5822DA446E536_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1EC278FED9EEBB3(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_E1EC278FED9EEBB3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8992DB23C45DED63(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_8992DB23C45DED63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_099BABCC29F69C12(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_099BABCC29F69C12_OFFSET))(this, a1, a2);
	}

	::System::Action_1<::System::Single>* get_OnUpdate()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_GET_ONUPDATE_OFFSET))(this);
	}

	::System::Void set_OnUpdate(::System::Action_1<::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_SET_ONUPDATE_OFFSET))(this, value);
	}

	::System::Boolean get_UseRigidbody()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_GET_USERIGIDBODY_OFFSET))(this);
	}

	::System::Void set_UseRigidbody(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_SET_USERIGIDBODY_OFFSET))(this, value);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Single get_RootMotionScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_GET_ROOTMOTIONSCALE_OFFSET))(this);
	}

	::System::Void set_RootMotionScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_SET_ROOTMOTIONSCALE_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Single> get_OverrideMoveDeltaPositionOtherDirectionConstraint()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this);
	}

	::System::Void set_OverrideMoveDeltaPositionOtherDirectionConstraint(::System::Nullable_1<::System::Single> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this, value);
	}

	::System::Void Method_2_7581BA71F2C87672(::UnityEngine::GameObject* P0, ::UnityEngine::Rigidbody* P1, ::UnityEngine::CapsuleCollider* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_7581BA71F2C87672_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_40DD63259E29E9BE(::UnityEngine::Quaternion P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_40DD63259E29E9BE_OFFSET))(this, P0);
	}

	::System::Void Method_2_466B634F34D74401(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_466B634F34D74401_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CD7C248B8FA7D6_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};

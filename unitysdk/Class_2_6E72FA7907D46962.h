#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54715B955DC6C855.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_568;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_6E72FA7907D46962_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A0E6A0)
#define CLASS_2_6E72FA7907D46962_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16A0EC50)
#define CLASS_2_6E72FA7907D46962_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x16A0ED60)
#define CLASS_2_6E72FA7907D46962_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x16A0EC90)
#define CLASS_2_6E72FA7907D46962_GET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x16A0ED40)
#define CLASS_2_6E72FA7907D46962_GET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0x16A0EC70)
#define CLASS_2_6E72FA7907D46962_METHOD_2_099BABCC29F69C12_OFFSET UNITYSDK_OFFSET(0x16A0E2D0)
#define CLASS_2_6E72FA7907D46962_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x16A0C370)
#define CLASS_2_6E72FA7907D46962_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x16A0B540)
#define CLASS_2_6E72FA7907D46962_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16A0EBB0)
#define CLASS_2_6E72FA7907D46962_METHOD_2_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x16A0C970)
#define CLASS_2_6E72FA7907D46962_METHOD_2_67FB6B6F658DE240_OFFSET UNITYSDK_OFFSET(0x16A0B890)
#define CLASS_2_6E72FA7907D46962_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x16A0E750)
#define CLASS_2_6E72FA7907D46962_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x16A0CA00)
#define CLASS_2_6E72FA7907D46962_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x16A0ECA0)
#define CLASS_2_6E72FA7907D46962_METHOD_2_8992DB23C45DED63_OFFSET UNITYSDK_OFFSET(0x16A0D030)
#define CLASS_2_6E72FA7907D46962_METHOD_2_8D4118C8A6074696_OFFSET UNITYSDK_OFFSET(0x16A0B820)
#define CLASS_2_6E72FA7907D46962_METHOD_2_ACB5822DA446E536_OFFSET UNITYSDK_OFFSET(0x16A0C4C0)
#define CLASS_2_6E72FA7907D46962_METHOD_2_B47691793BE46FF4_OFFSET UNITYSDK_OFFSET(0x16A0B250)
#define CLASS_2_6E72FA7907D46962_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A0EB70)
#define CLASS_2_6E72FA7907D46962_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x16A0CBC0)
#define CLASS_2_6E72FA7907D46962_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x16A0EA00)
#define CLASS_2_6E72FA7907D46962_METHOD_2_E1EC278FED9EEBB3_OFFSET UNITYSDK_OFFSET(0x16A0CD60)
#define CLASS_2_6E72FA7907D46962_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16A0EC60)
#define CLASS_2_6E72FA7907D46962_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x16A0ED70)
#define CLASS_2_6E72FA7907D46962_SET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x16A0ED50)
#define CLASS_2_6E72FA7907D46962_SET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0x16A0EC80)
#define CLASS_2_6E72FA7907D46962__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0B180)

inline static constexpr unsigned int Class_2_6E72FA7907D46962_TypeDefinitionIndex = 54549;

class Class_2_6E72FA7907D46962 : public ::Class_1_54715B955DC6C855
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::Class_0_16E4307DCC419505_568* Field_2_3; // 0x160
	::System::Action_1<::System::Single>* _OnUpdate_k__BackingField; // 0x168
	::System::Nullable_1<::System::Single> _OverrideMoveDeltaPositionOtherDirectionConstraint_k__BackingField; // 0x170
	::System::Boolean _UseRigidbody_k__BackingField; // 0x178
	::System::Single _RootMotionScale_k__BackingField; // 0x17C

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B47691793BE46FF4(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_B47691793BE46FF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_8D4118C8A6074696(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_8D4118C8A6074696_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_67FB6B6F658DE240(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_67FB6B6F658DE240_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_ACB5822DA446E536(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_ACB5822DA446E536_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1EC278FED9EEBB3(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_E1EC278FED9EEBB3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8992DB23C45DED63(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_8992DB23C45DED63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_099BABCC29F69C12(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_099BABCC29F69C12_OFFSET))(this, a1, a2);
	}

	::System::Action_1<::System::Single>* get_OnUpdate()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_GET_ONUPDATE_OFFSET))(this);
	}

	::System::Void set_OnUpdate(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_SET_ONUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean get_UseRigidbody()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_GET_USERIGIDBODY_OFFSET))(this);
	}

	::System::Void set_UseRigidbody(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_SET_USERIGIDBODY_OFFSET))(this, a1);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Single get_RootMotionScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_GET_ROOTMOTIONSCALE_OFFSET))(this);
	}

	::System::Void set_RootMotionScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_SET_ROOTMOTIONSCALE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> get_OverrideMoveDeltaPositionOtherDirectionConstraint()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this);
	}

	::System::Void set_OverrideMoveDeltaPositionOtherDirectionConstraint(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_6E72FA7907D46962_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this, a1);
	}
};

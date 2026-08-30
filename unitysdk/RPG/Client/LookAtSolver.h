#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C2F56B252E590157.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_718747F430E69B92;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATSOLVER_CLEAR_OFFSET UNITYSDK_OFFSET(0xD57A4D0)
#define RPG_CLIENT_LOOKATSOLVER_GET_HEADIKROTATION_OFFSET UNITYSDK_OFFSET(0xD583C10)
#define RPG_CLIENT_LOOKATSOLVER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD57B560)
#define RPG_CLIENT_LOOKATSOLVER_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD583C30)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_176EDC9D2FA71031_OFFSET UNITYSDK_OFFSET(0xD5832C0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0xD582B40)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_3BB91AA8A66C2378_OFFSET UNITYSDK_OFFSET(0xD57DCB0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_486E5C360891CE3D_OFFSET UNITYSDK_OFFSET(0xD583C70)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_6409EF8034A68A6B_OFFSET UNITYSDK_OFFSET(0xD57F1F0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_834133B9DC560EF2_OFFSET UNITYSDK_OFFSET(0xD581650)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xD5840C0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_A116C8ED96BD8D99_OFFSET UNITYSDK_OFFSET(0xD5836A0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_B45333C63548FF10_OFFSET UNITYSDK_OFFSET(0xD5812A0)
#define RPG_CLIENT_LOOKATSOLVER_METHOD_1_C69123962DC01A7E_OFFSET UNITYSDK_OFFSET(0xD582D60)
#define RPG_CLIENT_LOOKATSOLVER_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD583C50)
#define RPG_CLIENT_LOOKATSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xD582570)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtSolver_TypeDefinitionIndex = 68437;

	class LookAtSolver : public ::System::Object
	{
	public:
		::System::Boolean UseNoAnimatorMode; // 0x10
		::System::Boolean NormalizeTarget; // 0x11
		::System::Boolean UseNewRotationEvaluateMode; // 0x12
		::UnityEngine::Transform* Head; // 0x18
		::System::Int32 SpineNum; // 0x20
		::UnityEngine::Transform* LeftShoulder; // 0x28
		::UnityEngine::Transform* RightShoulder; // 0x30
		::System::Single BodyWeight; // 0x38
		::System::Single HeadWeight; // 0x3C
		::System::Single BodyRotMax; // 0x40
		::System::Single HeadRotMax; // 0x44
		::System::Single BodyPitchUpFactor; // 0x48
		::System::Single BodyPitchDownFactor; // 0x4C
		::System::Single HeadPitchFactor; // 0x50
		::System::Single BodyDefaultFwdWeight; // 0x54
		::System::Single HeadDefaultFwdWeight; // 0x58
		::UnityEngine::AnimationCurve* UprightConstraintCurve; // 0x60
		::System::Boolean _initialized; // 0x68
		::UnityEngine::AnimationCurve* SpineWeightCurve; // 0x70
		::Class_1_718747F430E69B92* _HeadBone; // 0x78
		::System::Collections::Generic::List_1<::Class_1_718747F430E69B92*>* _SpineBones; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _SpineTargetForwards; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _HeadTargetForwards; // 0x90
		::System::Int32 _TotalBonesNum; // 0x98
		::System::Single _IkWeight; // 0x9C
		::UnityEngine::Vector3 _RootFwd; // 0xA0
		::UnityEngine::Vector3 _RootUp; // 0xAC
		::UnityEngine::Vector3 _LookAtTarget; // 0xB8
		::UnityEngine::Vector3 _LookAtAdditiveTarget; // 0xC4
		::UnityEngine::Vector3 _HeadIKRotation; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3BB91AA8A66C2378(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_3BB91AA8A66C2378_OFFSET))(this, a1);
		}

		::System::Void Method_1_834133B9DC560EF2(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_834133B9DC560EF2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_6409EF8034A68A6B(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_6409EF8034A68A6B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 Method_1_B45333C63548FF10(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_B45333C63548FF10_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C69123962DC01A7E(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_C69123962DC01A7E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_1_176EDC9D2FA71031(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_176EDC9D2FA71031_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_A116C8ED96BD8D99(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_A116C8ED96BD8D99_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_GET_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HeadIKRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_GET_HEADIKROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LookAtTarget()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_SET_LOOKATTARGET_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_CLEAR_OFFSET))(this);
		}

		::System::Void Method_1_486E5C360891CE3D(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_C2F56B252E590157& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_C2F56B252E590157&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_486E5C360891CE3D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_8CE0803574BB66D7(::Struct_2_C2F56B252E590157& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C2F56B252E590157&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVER_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BoneChain;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define SOFTBODYIK_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x14EC2440)
#define SOFTBODYIK_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x14EC20E0)
#define SOFTBODYIK_CHECKCURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0x14EC2FC0)
#define SOFTBODYIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14EBEF60)
#define SOFTBODYIK_METHOD_5_15EF20217BD059DF_OFFSET UNITYSDK_OFFSET(0x14EBF6C0)
#define SOFTBODYIK_METHOD_5_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x14EBE0F0)
#define SOFTBODYIK_METHOD_5_3FD6E53B47B68444_OFFSET UNITYSDK_OFFSET(0x14EC24D0)
#define SOFTBODYIK_METHOD_5_5362541F0053C52B_OFFSET UNITYSDK_OFFSET(0x14EBF410)
#define SOFTBODYIK_METHOD_5_97E6634148C1D535_OFFSET UNITYSDK_OFFSET(0x14EC0FC0)
#define SOFTBODYIK_METHOD_5_A9B660A656DA65E2_OFFSET UNITYSDK_OFFSET(0x14EBFB50)
#define SOFTBODYIK_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14EBF140)
#define SOFTBODYIK_METHOD_5_B80705A944339AA3_1_OFFSET UNITYSDK_OFFSET(0x14EC0720)
#define SOFTBODYIK_METHOD_5_B80705A944339AA3_OFFSET UNITYSDK_OFFSET(0x14EC18A0)
#define SOFTBODYIK_METHOD_5_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x14EC1EE0)
#define SOFTBODYIK_METHOD_5_D3A7E03DEF3D4859_OFFSET UNITYSDK_OFFSET(0x14EBFD60)
#define SOFTBODYIK_METHOD_5_EB49B73DCCB74433_OFFSET UNITYSDK_OFFSET(0x14EC04D0)
#define SOFTBODYIK_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0x14EC2DD0)
#define SOFTBODYIK_RESETTOORIGINALSTATE_OFFSET UNITYSDK_OFFSET(0x14EC2920)
#define SOFTBODYIK_START_OFFSET UNITYSDK_OFFSET(0x14EBE0A0)
#define SOFTBODYIK_TESTFORCE_OFFSET UNITYSDK_OFFSET(0x14EC2E20)
#define SOFTBODYIK__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC3E30)

inline static constexpr unsigned int SoftBodyIK_TypeDefinitionIndex = 45470;

class SoftBodyIK : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* rootNode; // 0x18
	::System::Collections::Generic::List_1<::BoneChain*>* boneChains; // 0x20
	::System::Single weight; // 0x28
	::System::Single deformationMultiplier; // 0x2C
	::UnityEngine::AnimationCurve* distanceFalloff; // 0x30
	::System::Single stiffness; // 0x38
	::System::Single elasticity; // 0x3C
	::System::Single damping; // 0x40
	::System::Single maxBounceBack; // 0x44
	::System::Single rotationWeight; // 0x48
	::System::Single rotationStiffness; // 0x4C
	::System::Single cascadeStrength; // 0x50
	::System::Single externalForceMultiplier; // 0x54
	::System::Single externalForceFalloff; // 0x58
	::System::Single MoveStateRatio; // 0x5C
	::UnityEngine::Vector3 Field_5_15; // 0x60
	::UnityEngine::Quaternion Field_5_16; // 0x6C
	::UnityEngine::Vector3 Field_5_17; // 0x7C
	::UnityEngine::Vector3 Field_5_18; // 0x88
	::System::Boolean Field_5_19; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_START_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_5_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_5362541F0053C52B(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_5362541F0053C52B_OFFSET))(this, a1);
	}

	::System::Void Method_5_D3A7E03DEF3D4859(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_D3A7E03DEF3D4859_OFFSET))(this, a1);
	}

	::System::Void Method_5_15EF20217BD059DF(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_15EF20217BD059DF_OFFSET))(this, a1);
	}

	::System::Void Method_5_A9B660A656DA65E2(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_A9B660A656DA65E2_OFFSET))(this, a1);
	}

	::System::Void Method_5_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void AddForce(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void AddForce_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B80705A944339AA3(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_B80705A944339AA3_OFFSET))(this, a1);
	}

	::System::Void Method_5_97E6634148C1D535(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_97E6634148C1D535_OFFSET))(this, a1);
	}

	::System::Void Method_5_3FD6E53B47B68444(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_3FD6E53B47B68444_OFFSET))(this, a1);
	}

	::System::Void Method_5_EB49B73DCCB74433(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_EB49B73DCCB74433_OFFSET))(this, a1);
	}

	::System::Void Method_5_B80705A944339AA3_1(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_B80705A944339AA3_1_OFFSET))(this, a1);
	}

	::System::Void ResetToOriginalState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_RESETTOORIGINALSTATE_OFFSET))(this);
	}

	::System::Void Reinitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_REINITIALIZE_OFFSET))(this);
	}

	::System::Void TestForce()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_TESTFORCE_OFFSET))(this);
	}

	::System::Void CheckCurrentOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_CHECKCURRENTOFFSET_OFFSET))(this);
	}
};

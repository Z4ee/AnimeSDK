#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BoneChain;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define SOFTBODYIK_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0xB94CAF0)
#define SOFTBODYIK_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xB94C7C0)
#define SOFTBODYIK_CHECKCURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0xB94D640)
#define SOFTBODYIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB949AF0)
#define SOFTBODYIK_METHOD_5_189B2BC70D05DE79_OFFSET UNITYSDK_OFFSET(0xB94A7C0)
#define SOFTBODYIK_METHOD_5_39B6E81BBB7CC0F7_OFFSET UNITYSDK_OFFSET(0xB94A5D0)
#define SOFTBODYIK_METHOD_5_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xB948ED0)
#define SOFTBODYIK_METHOD_5_673B7BCE3283FF95_OFFSET UNITYSDK_OFFSET(0xB94B080)
#define SOFTBODYIK_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xB94C570)
#define SOFTBODYIK_METHOD_5_781FB24C8A9DE8B9_OFFSET UNITYSDK_OFFSET(0xB94AE80)
#define SOFTBODYIK_METHOD_5_8FDC33984A9371EE_OFFSET UNITYSDK_OFFSET(0xB949FA0)
#define SOFTBODYIK_METHOD_5_9448775AA0E0FFD8_OFFSET UNITYSDK_OFFSET(0xB94CB80)
#define SOFTBODYIK_METHOD_5_A2454B6423FF9D24_OFFSET UNITYSDK_OFFSET(0xB94A200)
#define SOFTBODYIK_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB949CD0)
#define SOFTBODYIK_METHOD_5_E2C8B6E510DEC188_OFFSET UNITYSDK_OFFSET(0xB94B810)
#define SOFTBODYIK_METHOD_5_EE0B6EBDD7D8196C_OFFSET UNITYSDK_OFFSET(0xB94C010)
#define SOFTBODYIK_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB94D450)
#define SOFTBODYIK_RESETTOORIGINALSTATE_OFFSET UNITYSDK_OFFSET(0xB94CF60)
#define SOFTBODYIK_START_OFFSET UNITYSDK_OFFSET(0xB948E80)
#define SOFTBODYIK_TESTFORCE_OFFSET UNITYSDK_OFFSET(0xB94D4A0)
#define SOFTBODYIK__CTOR_OFFSET UNITYSDK_OFFSET(0xB94E2A0)

inline static constexpr unsigned int SoftBodyIK_TypeDefinitionIndex = 44052;

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

	::System::Void Method_5_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_8FDC33984A9371EE(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_8FDC33984A9371EE_OFFSET))(this, a1);
	}

	::System::Void Method_5_189B2BC70D05DE79(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_189B2BC70D05DE79_OFFSET))(this, a1);
	}

	::System::Void Method_5_A2454B6423FF9D24(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_A2454B6423FF9D24_OFFSET))(this, a1);
	}

	::System::Void Method_5_39B6E81BBB7CC0F7(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_39B6E81BBB7CC0F7_OFFSET))(this, a1);
	}

	::System::Void Method_5_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_7646FFE662147970_OFFSET))(this);
	}

	::System::Void AddForce(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void AddForce_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_EE0B6EBDD7D8196C(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_EE0B6EBDD7D8196C_OFFSET))(this, a1);
	}

	::System::Void Method_5_E2C8B6E510DEC188(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_E2C8B6E510DEC188_OFFSET))(this, a1);
	}

	::System::Void Method_5_9448775AA0E0FFD8(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_9448775AA0E0FFD8_OFFSET))(this, a1);
	}

	::System::Void Method_5_781FB24C8A9DE8B9(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_781FB24C8A9DE8B9_OFFSET))(this, a1);
	}

	::System::Void Method_5_673B7BCE3283FF95(::BoneChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_METHOD_5_673B7BCE3283FF95_OFFSET))(this, a1);
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

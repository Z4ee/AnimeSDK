#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define DYNAMICBONECONFIGV2_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1F5EA4F0)
#define DYNAMICBONECONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EA910)
#define DYNAMICBONECONFIGV2__DEEPCOPY_G__COPY_16_0_OFFSET UNITYSDK_OFFSET(0x1F5EAA00)

inline static constexpr unsigned int DynamicBoneConfigV2_TypeDefinitionIndex = 35288;

class DynamicBoneConfigV2 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* m_ElasticityDistrib; // 0x10
	::UnityEngine::AnimationCurve* m_DampingDistrib; // 0x18
	::UnityEngine::AnimationCurve* m_StiffnessDistrib; // 0x20
	::UnityEngine::AnimationCurve* m_RadiusDistrib; // 0x28
	::UnityEngine::AnimationCurve* m_InertDistrib; // 0x30
	::UnityEngine::AnimationCurve* m_FrictionDistrib; // 0x38
	::System::Single m_Damping; // 0x40
	::System::Single m_Inert; // 0x44
	::UnityEngine::Vector3 m_Gravity; // 0x48
	::System::Single m_Friction; // 0x54
	::UnityEngine::Vector3 m_EndOffset; // 0x58
	::System::Single m_Radius; // 0x64
	::System::Single m_Stiffness; // 0x68
	::UnityEngine::Vector3 m_Force; // 0x6C
	::System::Single m_EndLength; // 0x78
	::System::Single m_Elasticity; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2__CTOR_OFFSET))(this);
	}

	::DynamicBoneConfigV2* DeepCopy()
	{
		return ((::DynamicBoneConfigV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2_DEEPCOPY_OFFSET))(this);
	}

	static ::UnityEngine::AnimationCurve* _DeepCopy_g__Copy_16_0(::UnityEngine::AnimationCurve* animationCurve)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2__DEEPCOPY_G__COPY_16_0_OFFSET))(animationCurve);
	}
};

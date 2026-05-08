#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONEV2_PARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE75D70)

inline static constexpr unsigned int DynamicBoneV2_Particle_TypeDefinitionIndex = 33078;

class DynamicBoneV2_Particle : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Transform; // 0x10
	::UnityEngine::Quaternion m_animRotation; // 0x18
	::System::Single m_Inert; // 0x28
	::System::Single m_BoneLength; // 0x2C
	::UnityEngine::Vector3 m_animPosition; // 0x30
	::UnityEngine::Vector3 m_InitLocalPosition; // 0x3C
	::System::Int32 m_ParentIndex; // 0x48
	::System::Single m_Friction; // 0x4C
	::System::Single m_Damping; // 0x50
	::UnityEngine::Quaternion m_InitLocalRotation; // 0x54
	::System::Single m_Radius; // 0x64
	::System::Single m_Stiffness; // 0x68
	::UnityEngine::Vector3 m_Position; // 0x6C
	::UnityEngine::Vector3 m_EndOffset; // 0x78
	::System::Boolean m_isCollide; // 0x84
	::System::Single m_Elasticity; // 0x88
	::UnityEngine::Vector3 m_PrevPosition; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_PARTICLE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONEV2_PARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F0030)

inline static constexpr unsigned int DynamicBoneV2_Particle_TypeDefinitionIndex = 35295;

class DynamicBoneV2_Particle : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Transform; // 0x10
	::System::Single m_BoneLength; // 0x18
	::UnityEngine::Vector3 m_Position; // 0x1C
	::UnityEngine::Vector3 m_EndOffset; // 0x28
	::System::Single m_Stiffness; // 0x34
	::System::Single m_Friction; // 0x38
	::System::Single m_Elasticity; // 0x3C
	::System::Single m_Radius; // 0x40
	::UnityEngine::Quaternion m_InitLocalRotation; // 0x44
	::System::Boolean m_isCollide; // 0x54
	::UnityEngine::Vector3 m_InitLocalPosition; // 0x58
	::System::Int32 m_ParentIndex; // 0x64
	::System::Single m_Inert; // 0x68
	::UnityEngine::Vector3 m_animPosition; // 0x6C
	::System::Single m_Damping; // 0x78
	::UnityEngine::Vector3 m_PrevPosition; // 0x7C
	::UnityEngine::Quaternion m_animRotation; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_PARTICLE__CTOR_OFFSET))(this);
	}
};

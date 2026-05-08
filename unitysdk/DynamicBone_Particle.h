#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONE_PARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6E860)

inline static constexpr unsigned int DynamicBone_Particle_TypeDefinitionIndex = 33064;

class DynamicBone_Particle : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Transform; // 0x10
	::System::Single m_Inert; // 0x18
	::UnityEngine::Vector3 m_Position; // 0x1C
	::UnityEngine::Vector3 m_InitLocalPosition; // 0x28
	::UnityEngine::Quaternion m_InitLocalRotation; // 0x34
	::System::Single m_Elasticity; // 0x44
	::System::Single m_Friction; // 0x48
	::UnityEngine::Vector3 m_EndOffset; // 0x4C
	::System::Int32 m_ParentIndex; // 0x58
	::System::Single m_Damping; // 0x5C
	::System::Single m_BoneLength; // 0x60
	::System::Single m_Stiffness; // 0x64
	::System::Single m_Radius; // 0x68
	::UnityEngine::Vector3 m_PrevPosition; // 0x6C
	::System::Boolean m_isCollide; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_PARTICLE__CTOR_OFFSET))(this);
	}
};

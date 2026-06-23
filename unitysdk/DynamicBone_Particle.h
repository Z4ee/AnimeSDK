#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONE_PARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AEEF0)

inline static constexpr unsigned int DynamicBone_Particle_TypeDefinitionIndex = 34622;

class DynamicBone_Particle : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Transform; // 0x10
	::UnityEngine::Vector3 m_EndOffset; // 0x18
	::System::Single m_Stiffness; // 0x24
	::System::Single m_Friction; // 0x28
	::UnityEngine::Quaternion m_InitLocalRotation; // 0x2C
	::System::Boolean m_isCollide; // 0x3C
	::System::Single m_Damping; // 0x40
	::System::Single m_Inert; // 0x44
	::UnityEngine::Vector3 m_PrevPosition; // 0x48
	::UnityEngine::Vector3 m_Position; // 0x54
	::System::Single m_Elasticity; // 0x60
	::System::Single m_BoneLength; // 0x64
	::UnityEngine::Vector3 m_InitLocalPosition; // 0x68
	::System::Single m_Radius; // 0x74
	::System::Int32 m_ParentIndex; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_PARTICLE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver_Bone.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x16D51740)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_7B0365A8073C120F_OFFSET UNITYSDK_OFFSET(0x16D56710)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_A4F3D407B322D681_OFFSET UNITYSDK_OFFSET(0x16D518F0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D56950)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverTrigonometric_TrigonometricBone_TypeDefinitionIndex = 70870;

	class IKSolverTrigonometric_TrigonometricBone : public ::RPG::Client::FullBody::IKSolver_Bone
	{
	public:
		::UnityEngine::Quaternion targetToLocalSpace; // 0x70
		::UnityEngine::Vector3 defaultLocalBendNormal; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_A4F3D407B322D681(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_A4F3D407B322D681_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion Method_3_7B0365A8073C120F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_7B0365A8073C120F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_3_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_METHOD_3_77FD543600E00498_OFFSET))(this);
		}
	};
}

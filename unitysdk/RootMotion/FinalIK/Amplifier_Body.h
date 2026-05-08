#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Amplifier_Body_EffectorLink; }
namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_AMPLIFIER_BODY_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B674D50)
#define ROOTMOTION_FINALIK_AMPLIFIER_BODY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B6743D0)
#define ROOTMOTION_FINALIK_AMPLIFIER_BODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B674D90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Amplifier_Body_TypeDefinitionIndex = 36690;

	class Amplifier_Body : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Transform* relativeTo; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::Amplifier_Body_EffectorLink*>* effectorLinks; // 0x20
		::System::Single verticalWeight; // 0x28
		::System::Single horizontalWeight; // 0x2C
		::System::Single speed; // 0x30
		::UnityEngine::Vector3 lastRelativePos; // 0x34
		::UnityEngine::Vector3 smoothDelta; // 0x40
		::System::Boolean firstUpdate; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_BODY__CTOR_OFFSET))(this);
		}

		::System::Void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single w, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_BODY_UPDATE_OFFSET))(this, solver, w, deltaTime);
		}

		static ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_BODY_MULTIPLY_OFFSET))(v1, v2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_1_OFFSET UNITYSDK_OFFSET(0x10E19AC0)
#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x10E19A30)
#define MOLEMOLE_FOLLOWANIMATOR_STARTFOLLOW_OFFSET UNITYSDK_OFFSET(0x10E19B20)
#define MOLEMOLE_FOLLOWANIMATOR_STOPFOLLOW_OFFSET UNITYSDK_OFFSET(0x10E19B60)
#define MOLEMOLE_FOLLOWANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10E19BA0)

namespace MoleMole
{
	inline static constexpr unsigned int FollowAnimator_TypeDefinitionIndex = 39325;

	class FollowAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* selfRenderer; // 0x18
		::UnityEngine::Transform* selfRoot; // 0x20
		::UnityEngine::Animator* Field_5_2; // 0x28
		::UnityEngine::SkinnedMeshRenderer* Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::System::Boolean follow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void SetFollowTarget(::UnityEngine::Animator* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetFollowTarget_1(::UnityEngine::Animator* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_1_OFFSET))(this, a1, a2);
		}

		::System::Void StartFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_STARTFOLLOW_OFFSET))(this);
		}

		::System::Void StopFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_STOPFOLLOW_OFFSET))(this);
		}
	};
}

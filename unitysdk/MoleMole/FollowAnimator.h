#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_1_OFFSET UNITYSDK_OFFSET(0x118C5AC0)
#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x118C5A30)
#define MOLEMOLE_FOLLOWANIMATOR_STARTFOLLOW_OFFSET UNITYSDK_OFFSET(0x118C5B20)
#define MOLEMOLE_FOLLOWANIMATOR_STOPFOLLOW_OFFSET UNITYSDK_OFFSET(0x118C5B60)
#define MOLEMOLE_FOLLOWANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x118C5BA0)

namespace MoleMole
{
	inline static constexpr unsigned int FollowAnimator_TypeDefinitionIndex = 54168;

	class FollowAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* selfRenderer; // 0x18
		::UnityEngine::Transform* selfRoot; // 0x20
		::UnityEngine::Animator* Field_5_7; // 0x28
		::UnityEngine::SkinnedMeshRenderer* Field_5_6; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
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

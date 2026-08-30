#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATETRANSFORMMODIFIER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0F2B00)
#define RPG_CLIENT_STATETRANSFORMMODIFIER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0F2C40)
#define RPG_CLIENT_STATETRANSFORMMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F2D80)

namespace RPG::Client
{
	inline static constexpr unsigned int StateTransformModifier_TypeDefinitionIndex = 68813;

	class StateTransformModifier : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::UnityEngine::Vector3 localPosition; // 0x18
		::UnityEngine::Quaternion localRotation; // 0x24
		::UnityEngine::Vector3 localScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSFORMMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSFORMMODIFIER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSFORMMODIFIER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}

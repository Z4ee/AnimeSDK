#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_METHOD_4_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x17B635D0)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_METHOD_4_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17B637C0)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x17B63540)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x17B63720)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B638C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateEnterTriggerBlockBehaviour_TypeDefinitionIndex = 65957;

	class StateEnterTriggerBlockBehaviour : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		// static const ::System::Single _ExtraProtectSeconds; // 0x0
		::System::Nullable_1<::System::UInt32> _BlockID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_C4FDF5DB46830B8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_METHOD_4_C4FDF5DB46830B8A_OFFSET))(this, a1);
		}

		::System::Void Method_4_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_METHOD_4_E3DE31A03057E055_OFFSET))(this);
		}
	};
}

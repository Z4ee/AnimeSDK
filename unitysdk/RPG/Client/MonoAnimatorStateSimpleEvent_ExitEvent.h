#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_StateEvent.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_METHOD_2_183DCE814B2CC19A_OFFSET UNITYSDK_OFFSET(0xC058FB0)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_METHOD_2_23F4864AF47CFD90_OFFSET UNITYSDK_OFFSET(0xC058E90)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0590B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_ExitEvent_TypeDefinitionIndex = 64101;

	class MonoAnimatorStateSimpleEvent_ExitEvent : public ::RPG::Client::MonoAnimatorStateSimpleEvent_StateEvent
	{
	public:
		::System::Boolean AllowTriggerOnTransition; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_23F4864AF47CFD90(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_METHOD_2_23F4864AF47CFD90_OFFSET))(this, a1);
		}

		::System::Void Method_2_183DCE814B2CC19A(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_METHOD_2_183DCE814B2CC19A_OFFSET))(this, a1, a2, a3);
		}
	};
}

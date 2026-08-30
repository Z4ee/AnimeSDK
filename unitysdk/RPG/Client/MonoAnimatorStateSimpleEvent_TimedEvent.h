#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_StateEvent.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT_METHOD_2_3CAD769FC088779C_OFFSET UNITYSDK_OFFSET(0xD730380)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT_METHOD_2_44EEB2BE4941EFE3_OFFSET UNITYSDK_OFFSET(0xD730250)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD730500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_TimedEvent_TypeDefinitionIndex = 68485;

	class MonoAnimatorStateSimpleEvent_TimedEvent : public ::RPG::Client::MonoAnimatorStateSimpleEvent_StateEvent
	{
	public:
		::System::Single NormalizedTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_44EEB2BE4941EFE3(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT_METHOD_2_44EEB2BE4941EFE3_OFFSET))(this, a1);
		}

		::System::Void Method_2_3CAD769FC088779C(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_TIMEDEVENT_METHOD_2_3CAD769FC088779C_OFFSET))(this, a1, a2, a3);
		}
	};
}

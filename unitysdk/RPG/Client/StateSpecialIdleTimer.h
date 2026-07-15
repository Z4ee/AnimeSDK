#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateCommonIdleTimer.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATESPECIALIDLETIMER_METHOD_5_00B48D91709955E0_OFFSET UNITYSDK_OFFSET(0x17B69530)
#define RPG_CLIENT_STATESPECIALIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17B693A0)
#define RPG_CLIENT_STATESPECIALIDLETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B695C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateSpecialIdleTimer_TypeDefinitionIndex = 65772;

	class StateSpecialIdleTimer : public ::RPG::Client::StateCommonIdleTimer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESPECIALIDLETIMER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESPECIALIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_00B48D91709955E0(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESPECIALIDLETIMER_METHOD_5_00B48D91709955E0_OFFSET))(this, a1);
		}
	};
}

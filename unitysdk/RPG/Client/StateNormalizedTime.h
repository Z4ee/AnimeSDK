#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATENORMALIZEDTIME_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DB310)
#define RPG_CLIENT_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DB1F0)
#define RPG_CLIENT_STATENORMALIZEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA4DB3C0)
#define RPG_CLIENT_STATENORMALIZEDTIME___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DB3E0)
#define RPG_CLIENT_STATENORMALIZEDTIME___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DB3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateNormalizedTime_TypeDefinitionIndex = 56228;

	class StateNormalizedTime : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean RecalcOnLoop; // 0x18
		::System::Single _time; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIME__CTOR_OFFSET))(this);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIME_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIME___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIME___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}
	};
}

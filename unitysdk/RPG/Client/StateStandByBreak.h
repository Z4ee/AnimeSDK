#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_CE3CD1D1492D0382_OFFSET UNITYSDK_OFFSET(0xC929660)
#define RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_E60607EEEA67A558_OFFSET UNITYSDK_OFFSET(0xC929A90)
#define RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_EEFE3CA8386BEC1A_OFFSET UNITYSDK_OFFSET(0xC9299B0)
#define RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_F5030600344F3898_OFFSET UNITYSDK_OFFSET(0xC9297F0)
#define RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xC9292E0)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC929180)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC929BD0)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC929350)
#define RPG_CLIENT_STATESTANDBYBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0xC929C90)
#define RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC929D00)
#define RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC929D20)
#define RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC929D10)

namespace RPG::Client
{
	inline static constexpr unsigned int StateStandByBreak_TypeDefinitionIndex = 64402;

	class StateStandByBreak : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single MinChangeGap; // 0x18
		::System::Single MaxChangeGap; // 0x1C
		::System::Single ChangeDuration; // 0x20
		::Il2CppArray<::System::Single>* CannotChangeNormalizedTimeRange; // 0x28
		::System::Single _GapTimer; // 0x30
		::System::Single _ChangeTimer; // 0x34
		::System::Single _ChangeStartValue; // 0x38
		::System::Single _ChangeTargetValue; // 0x3C
		::System::Boolean _IsChanging; // 0x40
		::System::Boolean _EnableBreak; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_E60607EEEA67A558(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_E60607EEEA67A558_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_CE3CD1D1492D0382(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_CE3CD1D1492D0382_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_F5030600344F3898(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_F5030600344F3898_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Boolean Method_4_EEFE3CA8386BEC1A(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_METHOD_4_EEFE3CA8386BEC1A_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}

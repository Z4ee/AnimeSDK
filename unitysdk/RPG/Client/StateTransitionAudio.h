#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class StateTransitionAudio_TransitionInfo; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_B1B448B2EC103605_OFFSET UNITYSDK_OFFSET(0xA4E04C0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_D09831639F615812_1_OFFSET UNITYSDK_OFFSET(0xA4E03F0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xA4E00E0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_ECD37C0004A0B2D4_OFFSET UNITYSDK_OFFSET(0xA4DFD00)
#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xA4DFF60)
#define RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_EDE7801417BC8FDC_OFFSET UNITYSDK_OFFSET(0xA4E0140)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4DFBB0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DFE50)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4E0030)
#define RPG_CLIENT_STATETRANSITIONAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E0610)
#define RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4E0620)
#define RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4E0630)
#define RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4E0640)

namespace RPG::Client
{
	inline static constexpr unsigned int StateTransitionAudio_TypeDefinitionIndex = 56244;

	class StateTransitionAudio : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::StateTransitionAudio_TransitionInfo*>* transferInfos; // 0x18
		::System::Boolean _isInExitTransfer; // 0x20
		::System::Boolean _transferBeginTrigger; // 0x21
		::System::Boolean _transfreEndTrigger; // 0x22
		::RPG::Client::MonoAnimationTrigger* _triggerComp; // 0x28
		::UnityEngine::Animator* _animator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_ECD37C0004A0B2D4(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_ECD37C0004A0B2D4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Void Method_4_D09831639F615812_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_D09831639F615812_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_EDE7801417BC8FDC(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_EDE7801417BC8FDC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		::System::Void Method_4_B1B448B2EC103605(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_METHOD_4_B1B448B2EC103605_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}

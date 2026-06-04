#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class WalkStyleTranInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEWALKSTYLE_METHOD_4_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xC92AEA0)
#define RPG_CLIENT_STATEWALKSTYLE_METHOD_4_351EF1ABA5191056_OFFSET UNITYSDK_OFFSET(0xC92B410)
#define RPG_CLIENT_STATEWALKSTYLE_METHOD_4_B12D175E944C9C0C_OFFSET UNITYSDK_OFFSET(0xC92B170)
#define RPG_CLIENT_STATEWALKSTYLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC92AE50)
#define RPG_CLIENT_STATEWALKSTYLE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC92AF60)
#define RPG_CLIENT_STATEWALKSTYLE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC92B500)
#define RPG_CLIENT_STATEWALKSTYLE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC92B300)
#define RPG_CLIENT_STATEWALKSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC92B7D0)
#define RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC92B7E0)
#define RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC92B800)
#define RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC92B7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateWalkStyle_TypeDefinitionIndex = 64408;

	class StateWalkStyle : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single walkStyleChangeDuration; // 0x18
		::Il2CppArray<::RPG::Client::WalkStyleTranInfo*>* WalkTranInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::WalkStyleTranInfo*>* _walkStyleInfoDict; // 0x28
		::System::Int32 _currentWalkStyleTo; // 0x30
		::System::Single _currentWalkStyle_X; // 0x34
		::System::Single _currentWalkStyle_Y; // 0x38
		::System::Single _transitionRatio; // 0x3C
		::System::Single _transitionDuration; // 0x40
		::System::Single _transitonTimer; // 0x44
		::System::Boolean _isInExit; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_4_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_METHOD_4_0865E94460F11643_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_351EF1ABA5191056(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_METHOD_4_351EF1ABA5191056_OFFSET))(this, a1);
		}

		::System::Void Method_4_B12D175E944C9C0C(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE_METHOD_4_B12D175E944C9C0C_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEWALKSTYLE___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}

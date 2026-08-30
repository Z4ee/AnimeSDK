#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateCommonIdleTimer.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEIDLETIMER_METHOD_5_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0xE0ECA10)
#define RPG_CLIENT_STATEIDLETIMER_METHOD_5_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0xE0EC9B0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0ECAF0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0ECF70)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xE0ED610)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xE0ED5A0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0ED030)
#define RPG_CLIENT_STATEIDLETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0ED680)

namespace RPG::Client
{
	inline static constexpr unsigned int StateIdleTimer_TypeDefinitionIndex = 68793;

	class StateIdleTimer : public ::RPG::Client::StateCommonIdleTimer
	{
	public:
		// static const ::System::Int32 CommonIdleValue = 0x3; // 0x0
		::System::Boolean ResetTimeOnStoryMode; // 0x40
		::RPG::Client::EntityGameObjectConnection* Connection; // 0x48
		::System::WeakReference_1<::RPG::GameCore::GameEntity*>* EntityRef; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_848FDD59AB054F3D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_METHOD_5_848FDD59AB054F3D_OFFSET))(this, a1);
		}

		::System::Void Method_5_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_METHOD_5_2F809989C4EE835D_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}
	};
}

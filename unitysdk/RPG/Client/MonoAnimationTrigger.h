#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xC057860)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET UNITYSDK_OFFSET(0xC0576F0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET UNITYSDK_OFFSET(0xC0572C0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xC0571B0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET UNITYSDK_OFFSET(0xC0573C0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC057750)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_1_OFFSET UNITYSDK_OFFSET(0xC057900)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xC0577C0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC057950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimationTrigger_TypeDefinitionIndex = 64484;

	class MonoAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::String*>* _AnimationCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerAudioEvent2D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET))(this, a1);
		}

		::System::Void TriggerEffectEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerAnimationEventNotify(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET))(this, a1);
		}

		::System::Void TriggerRegisteredCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_1_OFFSET))(this);
		}
	};
}

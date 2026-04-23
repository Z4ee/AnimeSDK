#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGAnimationEvent_InvokeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0xAF3A020)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xAF39B10)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET UNITYSDK_OFFSET(0xAF397C0)
#define RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET UNITYSDK_OFFSET(0xAF3A090)
#define RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xAF3AA70)
#define RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET UNITYSDK_OFFSET(0xAF396D0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAF3A970)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xAF3A3F0)
#define RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0xAF3A130)
#define RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xAF3AA30)
#define RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET UNITYSDK_OFFSET(0xAF39E60)
#define RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xAF3AB30)
#define RPG_CLIENT_RPGANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3AC30)
#define RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xAF39B90)
#define RPG_CLIENT_RPGANIMATIONEVENT__INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF3A440)
#define RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF3A1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_TypeDefinitionIndex = 67116;

	class RPGAnimationEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RPGAnimationEvent_InvokeType CallbackInvokeType; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*>* _StringAnimationCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RPGAnimationEvent* Get(::UnityEngine::Transform* target)
		{
			return ((::RPG::Client::RPGAnimationEvent*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET))(target);
		}

		::System::Void AddEventForAllClips(::UnityEngine::Animation* animation, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET))(this, animation, callback);
		}

		::System::Void AddAnimationEvent(::System::String* clipName, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET))(this, clipName, callback);
		}

		::System::Void AddAnimationEventByClip(::UnityEngine::AnimationClip* clip, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET))(this, clip, callback);
		}

		::UnityEngine::AnimationClip* _GetAnimationClip(::System::String* clipName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET))(this, clipName);
		}

		::System::Void ClearEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET))(this);
		}

		::System::Void RemoveAnimationEventByClip(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET))(this, clipName);
		}

		::System::Void _AddRPGAnimationEventToClip(::UnityEngine::AnimationClip* clip, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET))(this, clip, callback);
		}

		::System::Void OnRPGAnimationEvent(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET))(this, clipName);
		}

		::System::Void _InvokeCallback(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__INVOKECALLBACK_OFFSET))(this, clipName);
		}

		::System::Void _SetStringAnimationCallback(::System::String* clipName, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET))(this, clipName, callback);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void _CheckAnimationEvent(::UnityEngine::AnimationEvent* animationEvent, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationEvent*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET))(this, animationEvent, clip);
		}
	};
}

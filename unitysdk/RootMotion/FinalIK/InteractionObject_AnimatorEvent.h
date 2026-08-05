#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_1_OFFSET UNITYSDK_OFFSET(0x1FACCA90)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_2_OFFSET UNITYSDK_OFFSET(0x1FACCB70)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1FACC830)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACCC70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_AnimatorEvent_TypeDefinitionIndex = 38788;

	class InteractionObject_AnimatorEvent : public ::System::Object
	{
	public:
		// static const ::System::String* empty; // 0x0
		::UnityEngine::Animator* animator; // 0x10
		::UnityEngine::Animation* animation; // 0x18
		::System::String* animationState; // 0x20
		::System::Single crossfadeTime; // 0x28
		::System::Int32 layer; // 0x2C
		::System::Boolean resetNormalizedTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Activate(::System::Boolean pickUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_OFFSET))(this, pickUp);
		}

		::System::Void Activate_1(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_1_OFFSET))(this, animator);
		}

		::System::Void Activate_2(::UnityEngine::Animation* animation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ANIMATOREVENT_ACTIVATE_2_OFFSET))(this, animation);
		}
	};
}

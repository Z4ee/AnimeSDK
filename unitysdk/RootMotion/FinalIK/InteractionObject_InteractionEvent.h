#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class InteractionObject_AnimatorEvent; }
namespace RootMotion::FinalIK { class InteractionObject_Message; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityEvent; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1C2E2620)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E2710)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_InteractionEvent_TypeDefinitionIndex = 36652;

	class InteractionObject_InteractionEvent : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Boolean pause; // 0x14
		::System::Boolean pickUp; // 0x15
		::Il2CppArray<::RootMotion::FinalIK::InteractionObject_AnimatorEvent*>* animations; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::InteractionObject_Message*>* messages; // 0x20
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Activate(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT_ACTIVATE_OFFSET))(this, t);
		}
	};
}

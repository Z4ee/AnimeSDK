#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_MESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0x1F8B05E0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B07A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_Message_TypeDefinitionIndex = 38790;

	class InteractionObject_Message : public ::System::Object
	{
	public:
		// static const ::System::String* empty; // 0x0
		::System::String* function; // 0x10
		::UnityEngine::GameObject* recipient; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_MESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void Send(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_MESSAGE_SEND_OFFSET))(this, t);
		}
	};
}

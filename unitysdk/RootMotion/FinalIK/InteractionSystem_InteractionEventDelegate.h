#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RootMotion::FinalIK { class InteractionObject; }
namespace RootMotion::FinalIK { class InteractionObject_InteractionEvent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEB2580)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEB2610)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEB21F0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB21D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionSystem_InteractionEventDelegate_TypeDefinitionIndex = 38171;

	class InteractionSystem_InteractionEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::RootMotion::FinalIK::InteractionObject_InteractionEvent* interactionEvent)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::InteractionObject_InteractionEvent*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_INVOKE_OFFSET))(this, effectorType, interactionObject, interactionEvent);
		}

		::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::RootMotion::FinalIK::InteractionObject_InteractionEvent* interactionEvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::InteractionObject_InteractionEvent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_BEGININVOKE_OFFSET))(this, effectorType, interactionObject, interactionEvent, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

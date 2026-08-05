#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RootMotion::FinalIK { class InteractionObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F137430)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F1374B0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F137120)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F137100)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionSystem_InteractionDelegate_TypeDefinitionIndex = 38859;

	class InteractionSystem_InteractionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_INVOKE_OFFSET))(this, effectorType, interactionObject);
		}

		::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_BEGININVOKE_OFFSET))(this, effectorType, interactionObject, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

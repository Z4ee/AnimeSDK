#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeGameplay/DebugContextState.h"
#include "unitysdk/StateTreeGameplay/GraphEventContextState.h"
#include "unitysdk/StateTreeGameplay/TransformContextState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/Object.h"

#define STATETREEGAMEPLAY_ACTORCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1878DBE0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1878DD30)
#define STATETREEGAMEPLAY_ACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1878DCA0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1878DC40)
#define STATETREEGAMEPLAY_ACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1878DCE0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_SENDGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1878DD70)
#define STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1878DE70)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ActorContext_TypeDefinitionIndex = 71157;

	class ActorContext : public ::UnrealTypes::Object
	{
	public:
		::StateTreeGameplay::DebugContextState DebugInfo; // 0x38
		::StateTreeGameplay::GraphEventContextState GraphEvent; // 0x3C
		::StateTreeGameplay::TransformContextState Transform; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Boolean PlayAnimation(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_PLAYANIMATION_OFFSET))(this, animationID);
		}

		::System::Boolean IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Boolean SendGraphEvent(::Foundation::Unreal::FGameplayTag eventTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_SENDGRAPHEVENT_OFFSET))(this, eventTag);
		}
	};
}

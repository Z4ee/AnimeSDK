#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeGameplay/DebugState.h"
#include "unitysdk/StateTreeGameplay/GraphEventState.h"
#include "unitysdk/StateTreeGameplay/TransformState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/Object.h"

#define STATETREEGAMEPLAY_ACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x11EB0F30)
#define STATETREEGAMEPLAY_ACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x11EB0EA0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x11EB0E40)
#define STATETREEGAMEPLAY_ACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x11EB0EE0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_SENDGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x11EB0F70)
#define STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB1010)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ActorContext_TypeDefinitionIndex = 51322;

	class ActorContext : public ::UnrealTypes::Object
	{
	public:
		::StateTreeGameplay::TransformState Transform; // 0x38
		::StateTreeGameplay::GraphEventState GraphEvent; // 0x44
		::StateTreeGameplay::DebugState DebugInfo; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position);
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

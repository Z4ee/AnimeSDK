#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/StateTreeGameplay/AnimationState.h"
#include "unitysdk/StateTreeGameplay/MovementState.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x11EB1090)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x11EB1290)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x11EB11C0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x11EB10F0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x11EB1200)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB12D0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x11EB1350)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x11EB1390)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x11EB13D0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x11EB1440)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CrowdNpcActorContext_TypeDefinitionIndex = 46275;

	class CrowdNpcActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::StateTreeGameplay::AnimationState Animation; // 0x58
		::StateTreeGameplay::MovementState Movement; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Boolean PlayAnimation(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_PLAYANIMATION_OFFSET))(this, animationID);
		}

		::System::Boolean IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Boolean __base_IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Boolean __base_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISMOVING_OFFSET))(this);
		}

		::System::Boolean __base_MoveToPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET))(this, P0);
		}

		::System::Boolean __base_PlayAnimation(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET))(this, P0);
		}
	};
}

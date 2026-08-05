#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/StateTreeGameplay/NpcAnimationContextState.h"
#include "unitysdk/StateTreeGameplay/NpcMovementContextState.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1878E0A0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1878DFD0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1878DEF0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1878E010)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1878E0E0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1878E160)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1878E1A0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1878E1E0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1878E250)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CrowdNpcActorContext_TypeDefinitionIndex = 81979;

	class CrowdNpcActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::StateTreeGameplay::NpcMovementContextState Movement; // 0x58
		::StateTreeGameplay::NpcAnimationContextState Animation; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
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

		::System::Boolean __base_MoveToPosition(::UnityEngine::Vector3 P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_PlayAnimation(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET))(this, P0);
		}
	};
}

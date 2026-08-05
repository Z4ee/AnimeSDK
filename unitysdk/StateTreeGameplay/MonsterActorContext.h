#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/StateTreeGameplay/MonsterMovementContextState.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1CB92600)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB92520)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB92640)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1CB926C0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB92750)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MonsterActorContext_TypeDefinitionIndex = 59728;

	class MonsterActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::StateTreeGameplay::MonsterMovementContextState Movement; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Boolean __base_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_ISMOVING_OFFSET))(this);
		}

		::System::Boolean __base_MoveToPosition(::UnityEngine::Vector3 P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET))(this, P0, P1);
		}
	};
}

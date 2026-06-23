#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB266D0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB26770)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MonsterActorContext_TypeDefinitionIndex = 77294;

	class MonsterActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_GETPOSITION_OFFSET))(this);
		}
	};
}

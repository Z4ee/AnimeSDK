#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPG_CLIENT_TIMELINE_MANAVIDEOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE21EB00)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoBehaviour_TypeDefinitionIndex = 73250;

	class ManaVideoBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}

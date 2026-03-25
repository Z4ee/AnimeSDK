#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ANIMATIONCLIPBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x90C29C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationClipBaker_TypeDefinitionIndex = 55791;

	class AnimationClipBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single StartTime; // 0x0
		// static const ::System::Single EndTime; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONCLIPBAKER__CTOR_OFFSET))(this);
		}
	};
}

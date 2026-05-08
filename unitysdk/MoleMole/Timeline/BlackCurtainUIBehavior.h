#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_BLACKCURTAINUIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC3320)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BlackCurtainUIBehavior_TypeDefinitionIndex = 64927;

	class BlackCurtainUIBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Color ScreenColor; // 0x10
		::System::Boolean IsFinal; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BLACKCURTAINUIBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}

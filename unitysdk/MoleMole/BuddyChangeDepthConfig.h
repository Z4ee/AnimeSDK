#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BuddyDepthConfig; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_BUDDYCHANGEDEPTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B93E50)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyChangeDepthConfig_TypeDefinitionIndex = 52328;

	class BuddyChangeDepthConfig : public ::System::Object
	{
	public:
		::MoleMole::BuddyDepthConfig* far; // 0x10
		::UnityEngine::AnimationCurve* curve_nearForFar; // 0x18
		::MoleMole::BuddyDepthConfig* near; // 0x20
		::UnityEngine::AnimationCurve* curve; // 0x28
		::System::Single changeTime; // 0x30
		::System::Single changeTime_nearForFar; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYCHANGEDEPTHCONFIG__CTOR_OFFSET))(this);
		}
	};
}

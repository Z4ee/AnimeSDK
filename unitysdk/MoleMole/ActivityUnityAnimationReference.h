#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_ACTIVITYUNITYANIMATIONREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C76150)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityUnityAnimationReference_TypeDefinitionIndex = 56512;

	class ActivityUnityAnimationReference : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* animation; // 0x10
		::System::Single delay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYUNITYANIMATIONREFERENCE__CTOR_OFFSET))(this);
		}
	};
}

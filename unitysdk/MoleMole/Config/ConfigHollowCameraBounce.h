#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERABOUNCE__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraBounce_TypeDefinitionIndex = 84635;

	class ConfigHollowCameraBounce : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* bounceCurve; // 0x10
		::System::Single bounceSeconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERABOUNCE__CTOR_OFFSET))(this);
		}
	};
}

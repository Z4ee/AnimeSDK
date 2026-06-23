#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAEASING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A347670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraEasing_TypeDefinitionIndex = 44319;

	class ConfigHollowCameraEasing : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* easingCurve; // 0x10
		::UnityEngine::Vector2 easingMaxSpeed; // 0x18
		::System::Single MobileEasingThreshold; // 0x20
		::System::Single easingSeconds; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAEASING__CTOR_OFFSET))(this);
		}
	};
}

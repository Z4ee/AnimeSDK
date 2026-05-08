#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UIACHIEVEMENTANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB8700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIAchievementAnimConfig_TypeDefinitionIndex = 75717;

	class UIAchievementAnimConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single waitFadeOutTime; // 0x18
		::System::Single interval; // 0x1C
		::UnityEngine::AnimationCurve* fadeInCurve; // 0x20
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIACHIEVEMENTANIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}

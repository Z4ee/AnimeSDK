#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHANGEBGFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChangeBGFade_TypeDefinitionIndex = 44060;

	class ConfigChangeBGFade : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* FadeInSpeed; // 0x10
		::UnityEngine::AnimationCurve* FadeOutSpeed; // 0x18
		::System::Single FadeOutDuration; // 0x20
		::System::Single FadeInDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEBGFADE__CTOR_OFFSET))(this);
		}
	};
}

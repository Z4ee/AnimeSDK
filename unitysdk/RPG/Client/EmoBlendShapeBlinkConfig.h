#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoBlendShapeParamBase.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EMOBLENDSHAPEBLINKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D85700)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapeBlinkConfig_TypeDefinitionIndex = 67939;

	class EmoBlendShapeBlinkConfig : public ::RPG::Client::EmoBlendShapeParamBase
	{
	public:
		::System::Single blinkCloseValue; // 0x20
		::UnityEngine::AnimationCurve* curve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPEBLINKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

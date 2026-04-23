#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TILTCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DA820)

namespace RPG::Client
{
	inline static constexpr unsigned int TiltCommonConfig_TypeDefinitionIndex = 55414;

	class TiltCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean EnableTilt; // 0x18
		::UnityEngine::AnimationCurve* YawMapCurve; // 0x20
		::System::Single MaxTilt; // 0x28
		::System::Single TiltThreshold; // 0x2C
		::System::Single CurrentTiltVelocity; // 0x30
		::UnityEngine::AnimationCurve* TiltSpeedCurve; // 0x38
		::UnityEngine::AnimationCurve* TiltRecoverSpeedCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TILTCOMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}

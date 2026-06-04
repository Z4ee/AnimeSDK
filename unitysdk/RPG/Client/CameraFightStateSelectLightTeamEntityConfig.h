#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATESELECTLIGHTTEAMENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BA890)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateSelectLightTeamEntityConfig_TypeDefinitionIndex = 65051;

	class CameraFightStateSelectLightTeamEntityConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::System::Single LightTeamSelectFollowOffsetRatioX; // 0x20
		::UnityEngine::AnimationCurve* LightTeamSelectFollowOffsetRatioCurve; // 0x28
		::UnityEngine::AnimationCurve* LightTeamSelectAimOffsetRatioYCurve; // 0x30
		::System::Single ChooseFriendTargetLookAtWeight; // 0x38
		::UnityEngine::Vector3 ChooseFriendTargetMaxDeflection; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATESELECTLIGHTTEAMENTITYCONFIG__CTOR_OFFSET))(this);
		}
	};
}

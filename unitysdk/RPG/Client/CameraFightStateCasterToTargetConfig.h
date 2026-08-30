#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"

namespace RPG::Client { class CameraDynamicOffset; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATECASTERTOTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC9E8450)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateCasterToTargetConfig_TypeDefinitionIndex = 69541;

	class CameraFightStateCasterToTargetConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::RPG::Client::CameraDynamicOffset* DynamicOffsetConfig; // 0x20
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAnchorOffsetXCurve; // 0x28
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAnchorOffsetYCurve; // 0x30
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAnchorOffsetZCurve; // 0x38
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAimOffsetXCurve; // 0x40
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAimOffsetYCurve; // 0x48
		::UnityEngine::AnimationCurve* NamedOrSomatoDynamicAimOffsetZCurve; // 0x50
		::UnityEngine::AnimationCurve* LightTeamAdditiveAnchorOffsetZByTeamWidth; // 0x58
		::UnityEngine::AnimationCurve* DarkTeamAdditiveAnchorOffsetZByTeamWidth; // 0x60
		::UnityEngine::AnimationCurve* LightTeamAdditiveAnchorOffsetYByTeamWidth; // 0x68
		::UnityEngine::AnimationCurve* DarkTeamAdditiveAnchorOffsetYByTeamWidth; // 0x70
		::UnityEngine::AnimationCurve* AvatarToHugeMonsterCloseupOffsetScaleCurve; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATECASTERTOTARGETCONFIG__CTOR_OFFSET))(this);
		}
	};
}

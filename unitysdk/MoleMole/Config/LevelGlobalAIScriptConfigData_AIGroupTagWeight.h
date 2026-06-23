#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfigData_AIGroupTagWeight_TypeDefinitionIndex = 54605;

	struct alignas(8) LevelGlobalAIScriptConfigData_AIGroupTagWeight
	{
		::UnityEngine::AnimationCurve* dis2AvatarWeightCurve; // 0x10
		::System::Single dis2AvatarRatio; // 0x18
		::UnityEngine::AnimationCurve* dis2CamCenterWeightCurve; // 0x20
		::System::Single dis2CamCenterRatio; // 0x28
	};
}

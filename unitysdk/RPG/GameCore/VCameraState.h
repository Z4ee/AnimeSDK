#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraState_TypeDefinitionIndex = 15785;

	enum class VCameraState : ::System::Int32
	{
		Unknow = 0,
		SelectLightTeamEntity = 1,
		SelectDarkTeamEntity = 2,
		CastAnimation = 3,
		UseSkillPerform = 4,
		LightEntityAttack = 5,
		DarkEntityAttack = 6,
		CasterToTargetPerform = 7,
		CameraToTargetPerform = 8,
		LightTeamDolly = 9,
		FollowActiveEntity = 10,
		CameraMotion = 11,
		SelectAllLightTeamEntity = 12,
		SelectDarkTeamSelfEntity = 13,
		LastCloseupShotEnd = 14,
		SelectServant = 15,
		OrbitCruise = 16,
	};
}

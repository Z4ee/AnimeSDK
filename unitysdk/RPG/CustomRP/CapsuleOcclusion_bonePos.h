#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleOcclusion_bonePos_TypeDefinitionIndex = 49520;

	enum class CapsuleOcclusion_bonePos : ::System::Int32
	{
		Main_Body = 0,
		Head = 1,
		Chest = 2,
		Upper_Arm_L = 3,
		Upper_Arm_R = 4,
		Forearm_L = 5,
		Forearm_R = 6,
		Thigh_L = 7,
		Thigh_R = 8,
		Leg_L = 9,
		Leg_R = 10,
		feet_L = 11,
		feet_R = 12,
	};
}

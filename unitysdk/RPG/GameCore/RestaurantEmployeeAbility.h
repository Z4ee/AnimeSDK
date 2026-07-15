#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeAbility_TypeDefinitionIndex = 10034;

	enum class RestaurantEmployeeAbility : ::System::Int32
	{
		Unknown = 0,
		Delivery = 1,
		Clean = 2,
		Cooking = 3,
		FarmerBigCrop = 16,
		FarmerGrowUp = 17,
		WaiterSpeedUp = 4,
		WaiterServices = 5,
		WaiterAppease = 6,
		WaiterManager = 7,
		WaiterCharm = 8,
		AutoClean = 9,
		AutoDelivery = 10,
		ChefSpeedUp = 11,
		ChefPerfect = 12,
		ChefInspirit = 13,
		AutoCooking = 14,
		FarmerCritical = 15,
		FarmerOtherCrop = 18,
		AutoProcessEvent = 19,
		CustomerNumUp = 20,
		TableCharm = 21,
		FarmerFreeSeed = 22,
		FarmerAllowBatchPlanting = 23,
		FeverSkill = 24,
		LeaderSkill = 25,
		ChefSkill01 = 26,
		ChefSkill02 = 27,
	};
}

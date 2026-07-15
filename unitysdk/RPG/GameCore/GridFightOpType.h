#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOpType_TypeDefinitionIndex = 13151;

	enum class GridFightOpType : ::System::Int32
	{
		BuyShop = 1,
		RefreshShop = 2,
		BuyExp = 3,
		UpdatePos = 4,
		RecycleRole = 5,
		UseOrb = 6,
		UseForge = 7,
		Craft = 8,
		Dress = 9,
		UseConsumable = 10,
		TrackTrait = 11,
		TrackEquip = 12,
		EnterBattle = 13,
		UpdateRoleToBench = 15,
		LockShop = 16,
		CancelTrackTrait = 17,
		CancelTrackEquip = 18,
	};
}

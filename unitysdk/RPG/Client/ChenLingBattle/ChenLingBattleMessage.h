#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleMessage_TypeDefinitionIndex = 70806;

	enum class ChenLingBattleMessage : ::System::Int32
	{
		RefreshPreparePagePhaseView = 0,
		GridChanged = 1,
		EntityMoved = 2,
		HandCardChanged = 3,
		GainNewCards = 4,
		FreeRefreshCountChanged = 5,
		CurCoinChanged = 6,
		CurWaveChanged = 7,
		CurHpChanged = 8,
		ConditionChanged = 9,
		EffectChanged = 10,
		DeckEffectChanged = 11,
		DeckEffectChangedByDeath = 12,
		EffectRemoved = 13,
		EffectExecuteFailedByBuilding = 14,
		ShowPrepareAction = 15,
		BuildingAddProgressChange = 16,
		RefreshPolicyPhase = 17,
		RefreshShop = 18,
		ShopDiscountPercentChanged = 19,
		RefreshSelectCard = 20,
		SoldierPropertyChanged = 21,
		SoldierPromotionChanged = 22,
		EntityLevelChanged = 23,
		EntityEnchantChanged = 24,
		ClientConfirmSettle = 25,
		SelectGrid = 26,
		PolicyListChanged = 27,
		GetCoinByBuilding = 28,
		RefreshSoldierHP = 29,
		RefreshHPMemory = 30,
		RTDamageChanged = 31,
		SoldierDead = 32,
		SoldierSpawned = 33,
		GainCoin = 34,
		SoldierNumberChanged = 35,
		ShowTalk = 36,
		ShowToast = 37,
		BattleEnterRageMode = 38,
		BattleFinished = 39,
	};
}

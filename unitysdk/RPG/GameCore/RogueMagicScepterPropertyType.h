#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterPropertyType_TypeDefinitionIndex = 10261;

	enum class RogueMagicScepterPropertyType : ::System::Int32
	{
		Undefined = -1,
		SpeedAdd = 0,
		ActiveCountAdd = 1,
		ScepterLevel = 2,
		ID = 3,
		MaxSP = 4,
		MaxSPBase = 5,
		MaxSPAddRatio = 6,
		MaxSPOverride = 7,
		Unit_PassiveLv1Amount = 8,
		Unit_PassiveLv2Amount = 9,
		Unit_PassiveLv3Amount = 10,
		Unit_AttachLv1Amount = 11,
		Unit_AttachLv2Amount = 12,
		Unit_AttachLv3Amount = 13,
		Halo_ExistTimeAdd = 14,
		Buff_EffectTime = 15,
		Buff_MaxLayerAdd = 16,
		Buff_MaxLayerMulti = 17,
		Buff_LoopTimeAdd = 18,
		Buff_LoopTimeMulti = 19,
		Buff_LifeTimeAdd = 20,
		Buff_EffectIncrease_Buff = 21,
		Buff_EffectIncrease_Damage = 22,
		Buff_EffectIncrease_All = 23,
		PropertiesCount = 24,
	};
}

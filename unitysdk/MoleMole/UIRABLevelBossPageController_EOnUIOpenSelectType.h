#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossPageController_EOnUIOpenSelectType_TypeDefinitionIndex = 61939;

	enum class UIRABLevelBossPageController_EOnUIOpenSelectType : ::System::Int32
	{
		UnlockedMaxIdBoss = 1,
		NoSelect = 0,
		SelectBossGroupID = 3,
		SelectBossID = 2,
	};
}

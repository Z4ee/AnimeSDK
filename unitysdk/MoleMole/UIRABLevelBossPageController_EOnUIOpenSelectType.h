#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossPageController_EOnUIOpenSelectType_TypeDefinitionIndex = 40045;

	enum class UIRABLevelBossPageController_EOnUIOpenSelectType : ::System::Int32
	{
		NoSelect = 0,
		SelectBossGroupID = 3,
		UnlockedMaxIdBoss = 1,
		SelectBossID = 2,
	};
}

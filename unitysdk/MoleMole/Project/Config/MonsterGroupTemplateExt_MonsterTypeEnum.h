#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MonsterGroupTemplateExt_MonsterTypeEnum_TypeDefinitionIndex = 80066;

	enum class MonsterGroupTemplateExt_MonsterTypeEnum : ::System::Int32
	{
		Boss = 3,
		Minions = 1,
		Elite = 2,
	};
}

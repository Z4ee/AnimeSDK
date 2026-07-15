#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepWaitCustomTimeType_TypeDefinitionIndex = 23595;

	enum class GridFightPrepWaitCustomTimeType : ::System::Int32
	{
		Unknow = 0,
		RoundBegin = 1,
		ReturnPreparation = 2,
		AllEffectFinish = 3,
		AllPopupPanelsHide = 4,
	};
}

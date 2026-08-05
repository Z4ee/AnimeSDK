#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_ShowState_TypeDefinitionIndex = 80095;

	enum class UIBaseController_ShowState : ::System::Int32
	{
		AfterOnShow = 2,
		BeforeOnShow = 0,
		OnShow = 1,
	};
}

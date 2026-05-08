#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_ShowState_TypeDefinitionIndex = 70933;

	enum class UIBaseController_ShowState : ::System::Int32
	{
		BeforeOnShow = 0,
		AfterOnShow = 2,
		OnShow = 1,
	};
}

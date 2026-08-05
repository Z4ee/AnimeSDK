#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIStunDamageWidgetController_ShowFlag_TypeDefinitionIndex = 69206;

	enum class UIStunDamageWidgetController_ShowFlag : ::System::Int32
	{
		TempShow = 1,
		SpecialShow = 4,
		None = 0,
		KeepShow = 2,
	};
}

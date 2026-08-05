#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_NavOriginType_TypeDefinitionIndex = 73384;

	enum class UIMainCityNavigationPageContext_NavOriginType : ::System::Int32
	{
		Default = 0,
		Motor = 4,
		Bus = 2,
		Car = 1,
		Subway = 3,
	};
}

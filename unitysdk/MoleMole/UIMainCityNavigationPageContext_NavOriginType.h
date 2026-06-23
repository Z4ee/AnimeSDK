#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_NavOriginType_TypeDefinitionIndex = 45268;

	enum class UIMainCityNavigationPageContext_NavOriginType : ::System::Int32
	{
		Subway = 3,
		Car = 1,
		Bus = 2,
		Default = 0,
		Motor = 4,
	};
}

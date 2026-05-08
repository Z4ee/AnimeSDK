#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_NavOriginType_TypeDefinitionIndex = 65903;

	enum class UIMainCityNavigationPageContext_NavOriginType : ::System::Int32
	{
		Default = 0,
		Bus = 2,
		Subway = 3,
		Car = 1,
		Motor = 4,
	};
}

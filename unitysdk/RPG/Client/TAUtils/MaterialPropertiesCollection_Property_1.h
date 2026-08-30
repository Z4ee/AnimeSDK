#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property.h"

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_Property_1_TypeDefinitionIndex = 73509;

	template <typename T>
	class MaterialPropertiesCollection_Property_1 : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property
	{
	public:
		T value; // 0x0
	};
}

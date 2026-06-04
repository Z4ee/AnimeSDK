#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BundleLocationType_TypeDefinitionIndex = 38428;

	enum class BundleLocationType : ::System::Int32
	{
		eServerBakBundle = 0,
		eLocalBakBundle = 1,
		eLocalNotBakBundle = 2,
	};
}

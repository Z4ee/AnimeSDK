#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionAttributeAdvertisementType_TypeDefinitionIndex = 42987;

	enum class SessionAttributeAdvertisementType : ::System::Int32
	{
		DontAdvertise = 0,
		Advertise = 1,
	};
}

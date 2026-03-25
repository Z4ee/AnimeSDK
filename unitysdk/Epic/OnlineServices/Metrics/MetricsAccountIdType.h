#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int MetricsAccountIdType_TypeDefinitionIndex = 35975;

	enum class MetricsAccountIdType : ::System::Int32
	{
		Epic = 0,
		External = 1,
	};
}

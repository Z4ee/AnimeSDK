#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int KWSPermissionStatus_TypeDefinitionIndex = 42866;

	enum class KWSPermissionStatus : ::System::Int32
	{
		Granted = 0,
		Rejected = 1,
		Pending = 2,
	};
}

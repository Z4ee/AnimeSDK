#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class ExclusiveResourceManager_3; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_3_TickState_TypeDefinitionIndex = 9020;

	template <typename TResource, typename TDefault, typename TRequest>
	struct ExclusiveResourceManager_3_TickState
	{
		TResource Resource; // 0x0
		TRequest Request; // 0x0
	};
}

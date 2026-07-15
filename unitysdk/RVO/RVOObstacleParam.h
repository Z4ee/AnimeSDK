#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace RVO
{
	inline static constexpr unsigned int RVOObstacleParam_TypeDefinitionIndex = 42713;

	struct alignas(8) RVOObstacleParam
	{
		::System::Collections::Generic::IList_1<::RVO::Vector2>* Vertices; // 0x10
		::System::Collections::Generic::IList_1<::System::Single>* Heights; // 0x18
	};
}

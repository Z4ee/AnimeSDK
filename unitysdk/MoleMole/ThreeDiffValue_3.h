#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole
{
	inline static constexpr unsigned int ThreeDiffValue_3_TypeDefinitionIndex = 52919;

	template <typename T1, typename T2, typename T3>
	class ThreeDiffValue_3 : public ::System::Object
	{
	public:
		T1 Value1; // 0x0
		T2 Value2; // 0x0
		T3 Value3; // 0x0
	};
}

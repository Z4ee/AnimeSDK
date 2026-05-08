#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole
{
	inline static constexpr unsigned int TwoDiffValue_2_TypeDefinitionIndex = 58327;

	template <typename T1, typename T2>
	class TwoDiffValue_2 : public ::System::Object
	{
	public:
		T1 Value1; // 0x0
		T2 value2; // 0x0
	};
}

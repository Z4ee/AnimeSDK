#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int RangedLayoutPropertyData_1_TypeDefinitionIndex = 47511;

	template <typename T>
	class RangedLayoutPropertyData_1 : public ::EnviromentSystemV2Space::LayoutPropertyData_1<T>
	{
	public:
		T minVal; // 0x0
		T maxVal; // 0x0
	};
}

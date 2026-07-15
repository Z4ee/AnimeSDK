#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyDataBase.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutPropertyData_1_TypeDefinitionIndex = 47510;

	template <typename T>
	class LayoutPropertyData_1 : public ::EnviromentSystemV2Space::LayoutPropertyDataBase
	{
	public:
		T v; // 0x0
	};
}

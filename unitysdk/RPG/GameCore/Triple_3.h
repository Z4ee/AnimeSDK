#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Triple_3_TypeDefinitionIndex = 53227;

	template <typename T1, typename T2, typename T3>
	class Triple_3 : public ::System::Object
	{
	public:
		T1 First; // 0x0
		T2 Second; // 0x0
		T3 Third; // 0x0
	};
}

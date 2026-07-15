#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestParaType_TypeDefinitionIndex = 10073;

	enum class QuestParaType : ::System::Int32
	{
		Unknown = 0,
		NoPara = 1,
		Equal = 2,
		Greater = 3,
		GreaterEqual = 4,
		Less = 5,
		LessEqual = 6,
		ListContain = 7,
		IntEqualListContain = 8,
		IntContainListContain = 9,
		EqualOrZeroAny = 10,
		ListContainList = 11,
	};
}

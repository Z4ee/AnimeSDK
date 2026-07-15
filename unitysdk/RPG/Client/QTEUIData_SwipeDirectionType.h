#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int QTEUIData_SwipeDirectionType_TypeDefinitionIndex = 67969;

	enum class QTEUIData_SwipeDirectionType : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Up = 2,
		Down = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_2EDC9A17B260920E_TriggerType_TypeDefinitionIndex = 75195;

enum class Class_1_2EDC9A17B260920E_TriggerType : ::System::Int32
{
	None = 0,
	OnPreProgressing = 1,
	OnProgressing = 2,
	OnProgressingAddition = 3,
	OnFinishProgressing = 4,
	OnPostProgressing = 5,
	OnStatChange = 6,
};

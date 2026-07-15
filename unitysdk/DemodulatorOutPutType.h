#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DemodulatorOutPutType_TypeDefinitionIndex = 45730;

enum class DemodulatorOutPutType : ::System::Int32
{
	Unknow = 0,
	Float = 1,
	Vector = 2,
	Color = 3,
	Transform = 4,
	Int = 5,
	Bool = 6,
	Count = 7,
};

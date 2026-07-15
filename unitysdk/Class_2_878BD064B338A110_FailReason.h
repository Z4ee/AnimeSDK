#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_878BD064B338A110_FailReason_TypeDefinitionIndex = 56310;

enum class Class_2_878BD064B338A110_FailReason : ::System::Int32
{
	None = 0,
	NodeNotFound = 1,
	NodeNotActive = 2,
	ImageCheckFail = 3,
	BtnCheckFail = 4,
	ScaleCheckFail = 5,
	MoveCheckFail = 6,
};

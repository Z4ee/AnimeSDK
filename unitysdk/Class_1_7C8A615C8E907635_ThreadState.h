#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_7C8A615C8E907635_ThreadState_TypeDefinitionIndex = 56928;

enum class Class_1_7C8A615C8E907635_ThreadState : ::System::Int32
{
	None = 0,
	Stopping = 1,
	UserRetrying = 2,
	Running = 3,
	Success = 4,
	Failed = 5,
	Abort = 6,
};

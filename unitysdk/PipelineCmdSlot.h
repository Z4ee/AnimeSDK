#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PipelineCmdSlot_TypeDefinitionIndex = 35929;

enum class PipelineCmdSlot : ::System::Int32
{
	BeforePrepare = 0,
	AfterGBuffer = 1,
	AfterDepthCopy = 2,
	AfterHiz = 3,
	AfterOpqaue = 4,
	BeforeTransparent = 5,
	AfterTransparent = 6,
	BeforeUber = 7,
	InUI = 8,
	Reflection = 9,
	Num = 10,
};

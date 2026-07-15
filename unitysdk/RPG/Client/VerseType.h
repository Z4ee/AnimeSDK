#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VerseType_TypeDefinitionIndex = 63380;

	enum class VerseType : ::System::Int32
	{
		Master = 0,
		BranchLine = 1,
		EarlyAccess = 2,
	};
}

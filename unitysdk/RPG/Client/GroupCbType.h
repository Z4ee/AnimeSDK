#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GroupCbType_TypeDefinitionIndex = 64347;

	enum class GroupCbType : ::System::Int32
	{
		eGroupCb_TSC = 0,
		eGroupCb_Count = 1,
	};
}

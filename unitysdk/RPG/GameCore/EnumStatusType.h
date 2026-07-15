#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnumStatusType_TypeDefinitionIndex = 10063;

	enum class EnumStatusType : ::System::Int32
	{
		Unknown = 0,
		Buff = 1,
		Debuff = 2,
		Other = 3,
	};
}

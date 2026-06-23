#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_RecordFlag_TypeDefinitionIndex = 42194;

	enum class UIBaseChatPlayController_RecordFlag : ::System::Int32
	{
		OnlyProcess = 2,
		All = 0,
		OnlyRecord = 1,
	};
}

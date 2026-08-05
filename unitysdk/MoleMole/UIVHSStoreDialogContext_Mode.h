#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogContext_Mode_TypeDefinitionIndex = 50488;

	enum class UIVHSStoreDialogContext_Mode : ::System::Int32
	{
		Recommand = 1,
		Limit = 2,
		Sale = 0,
	};
}

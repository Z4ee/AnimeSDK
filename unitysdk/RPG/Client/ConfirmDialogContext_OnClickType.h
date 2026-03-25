#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogContext_OnClickType_TypeDefinitionIndex = 59587;

	enum class ConfirmDialogContext_OnClickType : ::System::Int32
	{
		Ok = 0,
		Cancel = 1,
		Close = 2,
		Bg = 3,
		None = 4,
	};
}

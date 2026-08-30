#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogContext_DialogBtnMode_TypeDefinitionIndex = 72636;

	enum class ConfirmDialogContext_DialogBtnMode : ::System::Int32
	{
		eOk = 0,
		eOkCancel = 1,
		eCancel = 2,
		eCustomOkCancel = 3,
		None = 4,
	};
}

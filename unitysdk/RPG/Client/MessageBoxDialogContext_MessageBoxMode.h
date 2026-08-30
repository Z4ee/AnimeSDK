#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogContext_MessageBoxMode_TypeDefinitionIndex = 72733;

	enum class MessageBoxDialogContext_MessageBoxMode : ::System::Int32
	{
		eOkCancel = 0,
		eOk = 1,
		eCancel = 2,
	};
}

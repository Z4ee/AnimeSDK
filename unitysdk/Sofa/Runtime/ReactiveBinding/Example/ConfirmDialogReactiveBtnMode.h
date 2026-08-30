#pragma once
#include "unitysdk/unitysdk.h"

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ConfirmDialogReactiveBtnMode_TypeDefinitionIndex = 50361;

	enum class ConfirmDialogReactiveBtnMode : ::System::Int32
	{
		eOk = 0,
		eOkCancel = 1,
		eCancel = 2,
		eCustomOkCancel = 3,
		None = 4,
	};
}

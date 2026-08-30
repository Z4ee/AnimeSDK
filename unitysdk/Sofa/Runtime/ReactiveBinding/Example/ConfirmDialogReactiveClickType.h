#pragma once
#include "unitysdk/unitysdk.h"

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ConfirmDialogReactiveClickType_TypeDefinitionIndex = 50362;

	enum class ConfirmDialogReactiveClickType : ::System::Int32
	{
		Ok = 0,
		Cancel = 1,
		Close = 2,
		Bg = 3,
		None = 4,
	};
}

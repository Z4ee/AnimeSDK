#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_SelectedResult_TypeDefinitionIndex = 7962;

	enum class PopupDialog_SelectedResult : ::System::Int32
	{
		TopSelected = 0,
		BottomSelected = 1,
		Closed = 2,
	};
}

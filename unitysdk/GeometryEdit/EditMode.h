#pragma once
#include "unitysdk/unitysdk.h"

namespace GeometryEdit
{
	inline static constexpr unsigned int EditMode_TypeDefinitionIndex = 49614;

	enum class EditMode : ::System::Int32
	{
		Disable = 0,
		Preview = 1,
		Edit = 2,
	};
}

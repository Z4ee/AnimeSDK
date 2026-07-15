#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BindInfo_Type_TypeDefinitionIndex = 46716;

	enum class BindInfo_Type : ::System::Int32
	{
		TrackBinding = 1,
		ClipExpose = 2,
		ClipField = 4,
	};
}

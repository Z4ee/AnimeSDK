#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectVisibility_SetVisibleMode_TypeDefinitionIndex = 27900;

	enum class SetObjectVisibility_SetVisibleMode : ::System::Int32
	{
		Show = 1,
		Toggle = 2,
		Hide = 0,
	};
}

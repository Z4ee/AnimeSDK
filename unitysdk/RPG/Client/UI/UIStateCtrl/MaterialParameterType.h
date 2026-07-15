#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MaterialParameterType_TypeDefinitionIndex = 70661;

	enum class MaterialParameterType : ::System::Int32
	{
		Float = 0,
		Vector3 = 1,
		Color = 2,
		Keyword = 3,
	};
}

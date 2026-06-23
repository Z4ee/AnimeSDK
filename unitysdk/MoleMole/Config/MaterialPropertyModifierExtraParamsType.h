#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyModifierExtraParamsType_TypeDefinitionIndex = 83526;

	enum class MaterialPropertyModifierExtraParamsType : ::System::Int32
	{
		Unknown = 0,
		EffectChild = 2,
		CasterAttachPoint = 1,
	};
}

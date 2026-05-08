#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyModifierExtraParamsType_TypeDefinitionIndex = 51102;

	enum class MaterialPropertyModifierExtraParamsType : ::System::Int32
	{
		Unknown = 0,
		CasterAttachPoint = 1,
		EffectChild = 2,
	};
}

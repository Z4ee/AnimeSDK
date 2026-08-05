#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RecorderMaterialType_TypeDefinitionIndex = 32806;

	enum class RecorderMaterialType : ::System::Int32
	{
		Primitive = 0,
		Add = 1,
		Changed = 2,
		Old = 3,
	};
}

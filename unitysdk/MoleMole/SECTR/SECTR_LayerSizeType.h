#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_LayerSizeType_TypeDefinitionIndex = 39045;

	enum class SECTR_LayerSizeType : ::System::Int32
	{
		Size_2 = 1,
		Size_1024 = 10,
		Size_16 = 4,
		Size_512 = 9,
		Size_32 = 5,
		Size_256 = 8,
		Size_64 = 6,
		Size_8 = 3,
		Size_4 = 2,
		Size_1 = 0,
		Size_128 = 7,
	};
}

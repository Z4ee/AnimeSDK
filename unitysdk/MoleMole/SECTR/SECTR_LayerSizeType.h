#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_LayerSizeType_TypeDefinitionIndex = 57832;

	enum class SECTR_LayerSizeType : ::System::Int32
	{
		Size_32 = 5,
		Size_4 = 2,
		Size_64 = 6,
		Size_1024 = 10,
		Size_256 = 8,
		Size_16 = 4,
		Size_2 = 1,
		Size_128 = 7,
		Size_8 = 3,
		Size_1 = 0,
		Size_512 = 9,
	};
}

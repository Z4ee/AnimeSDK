#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int ColorSpaceConversionType_TypeDefinitionIndex = 38052;

	enum class ColorSpaceConversionType : ::System::Int32
	{
		ITU_R_BT601_Limited = 0,
		ITU_R_BT601_Fullrange = 1,
		ITU_R_BT709_Limited = 10,
		ITU_R_BT709_Fullrange = 11,
		Unspecified = 255,
	};
}

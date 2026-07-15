#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CurveType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactFadeParameter_TypeDefinitionIndex = 37830;

	struct alignas(4) CriAtomExCategory_ReactFadeParameter
	{
		::CriWare::CriAtomEx_CurveType curveType; // 0x10
		::System::Single curveStrength; // 0x14
		::System::UInt16 fadeTimeMs; // 0x18
	};
}

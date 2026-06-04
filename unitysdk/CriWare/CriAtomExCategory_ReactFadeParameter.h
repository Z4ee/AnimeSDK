#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerCurveType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactFadeParameter_TypeDefinitionIndex = 37031;

	struct alignas(4) CriAtomExCategory_ReactFadeParameter
	{
		::CriWare::CriAtomExCategory_ReactDuckerCurveType curveType; // 0x10
		::System::Single curveStrength; // 0x14
		::System::UInt16 fadeTimeMs; // 0x18
	};
}

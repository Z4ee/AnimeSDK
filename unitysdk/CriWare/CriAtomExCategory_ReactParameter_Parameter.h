#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactAisacModulationParameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerParameter.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactParameter_Parameter_TypeDefinitionIndex = 37838;

	struct alignas(4) CriAtomExCategory_ReactParameter_Parameter
	{
		::CriWare::CriAtomExCategory_ReactDuckerParameter ducker; // 0x10
		::CriWare::CriAtomExCategory_ReactAisacModulationParameter aisacModulation; // 0x10
	};
}

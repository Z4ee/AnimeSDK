#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactDuckerParameter_AisacControl_TypeDefinitionIndex = 37834;

	struct alignas(4) CriAtomExCategory_ReactDuckerParameter_AisacControl
	{
		::System::UInt32 id; // 0x10
		::System::Single value; // 0x14
	};
}

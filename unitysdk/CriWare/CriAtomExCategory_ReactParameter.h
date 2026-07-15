#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactParameter_Parameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactParameter_TypeDefinitionIndex = 37837;

	struct alignas(4) CriAtomExCategory_ReactParameter
	{
		::CriWare::CriAtomExCategory_ReactParameter_Parameter parameter; // 0x10
		::CriWare::CriAtomExCategory_ReactType type; // 0x3C
		::System::Boolean enablePausingCue; // 0x40
	};
}

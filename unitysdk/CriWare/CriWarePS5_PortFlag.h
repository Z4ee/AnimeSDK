#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_PortFlag_TypeDefinitionIndex = 39927;

	enum class CriWarePS5_PortFlag : ::System::UInt32
	{
		Restricted = 0x1,
		Passthrough = 0x2,
	};
}

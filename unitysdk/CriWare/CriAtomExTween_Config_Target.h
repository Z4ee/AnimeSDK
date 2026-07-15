#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExTween_Config_Target_TypeDefinitionIndex = 37913;

	struct alignas(4) CriAtomExTween_Config_Target
	{
		::CriWare::CriAtomEx_Parameter parameterId; // 0x10
		::System::UInt32 aisacIds; // 0x10
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExTween_Config_Target.h"
#include "unitysdk/CriWare/CriAtomExTween_ParameterType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExTween_Config_TypeDefinitionIndex = 37912;

	struct alignas(4) CriAtomExTween_Config
	{
		::CriWare::CriAtomExTween_Config_Target target; // 0x10
		::CriWare::CriAtomExTween_ParameterType parameterType; // 0x14
	};
}

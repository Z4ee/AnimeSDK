#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define POSTPROCESS_MKGLOW_MINMAXRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define POSTPROCESS_MKGLOW_MINMAXRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x48A560)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int MinMaxRange_TypeDefinitionIndex = 27383;

	struct alignas(4) MinMaxRange
	{
		::System::Single minValue; // 0x10
		::System::Single maxValue; // 0x14

		::System::Void _ctor(::System::Single minValue, ::System::Single maxValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MINMAXRANGE__CTOR_OFFSET))(this, minValue, maxValue);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector2 minMaxValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MINMAXRANGE__CTOR_1_OFFSET))(this, minMaxValue);
		}
		*/
	};
}

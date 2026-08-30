#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Texture2D; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x3B78370)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SpeedLineParameter_TypeDefinitionIndex = 49069;

	struct alignas(8) SpeedLineParameter
	{
		::System::Boolean SpeedLineOverrideState; // 0x10
		::UnityEngine::Color SpeedlineColor; // 0x14
		::System::Single Speed; // 0x24
		::System::Boolean UseTwoTone; // 0x28
		::System::Single WhitePercent; // 0x2C
		::System::Single LineDivide; // 0x30
		::System::Single LineDivideY; // 0x34
		::System::Single LineOffset; // 0x38
		::System::Single LineDensity; // 0x3C
		::System::Single PosX; // 0x40
		::System::Single PosY; // 0x44
		::System::Single StartDistance; // 0x48
		::System::Single EndDistance; // 0x4C
		::System::Single SpeedBlurStrength; // 0x50
		::System::Single LineBrightness; // 0x54
		::System::Single Rotation; // 0x58
		::System::Single SpeedlineEdgeSoft; // 0x5C
		::System::Boolean EnableSpeedlineTex; // 0x60
		::UnityEngine::Texture2D* speedlineTex; // 0x68
		::System::Boolean UseRadial; // 0x70

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINEPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}

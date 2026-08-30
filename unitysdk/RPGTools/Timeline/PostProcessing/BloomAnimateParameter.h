#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP { class BloomStage; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA40)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomAnimateParameter_TypeDefinitionIndex = 49000;

	struct alignas(8) BloomAnimateParameter
	{
		::System::Single BloomThreshold; // 0x10
		::System::Single BloomIntensity; // 0x14
		::RPG::CustomRP::BloomStage* BloomStageParam1; // 0x18
		::RPG::CustomRP::BloomStage* BloomStageParam2; // 0x20
		::RPG::CustomRP::BloomStage* BloomStageParam3; // 0x28
		::RPG::CustomRP::BloomStage* BloomStageParam4; // 0x30
		::System::Single BloomR; // 0x38
		::System::Single BloomG; // 0x3C
		::System::Single BloomB; // 0x40
		::System::Boolean overrideState; // 0x44

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATEPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}

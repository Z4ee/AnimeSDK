#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP { class AllBloomStage; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x39E5A00)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomParameter_TypeDefinitionIndex = 46757;

	struct alignas(8) BloomParameter
	{
		::System::Single BloomThreshold; // 0x10
		::System::Single BloomIntensity; // 0x14
		::RPG::CustomRP::AllBloomStage* AllBloomStageParam; // 0x18
		::System::Single BloomR; // 0x20
		::System::Single BloomG; // 0x24
		::System::Single BloomB; // 0x28
		::System::Boolean overrideState; // 0x2C

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}

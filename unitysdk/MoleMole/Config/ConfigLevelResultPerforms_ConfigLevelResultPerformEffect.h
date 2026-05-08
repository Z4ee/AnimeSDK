#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMEFFECT_ONSTARTFRAMEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x7D6520)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMEFFECT_ONSTARTTIMEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x7D6580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_ConfigLevelResultPerformEffect_TypeDefinitionIndex = 70820;

	struct alignas(8) ConfigLevelResultPerforms_ConfigLevelResultPerformEffect
	{
		// static const ::System::Int32 FixedFrameCount = 0x3C; // 0x0
		::System::Int32 StartFrame; // 0x10
		::System::Single StartTime; // 0x14
		::System::String* EffectKey; // 0x18
		::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffectType PlayType; // 0x20

		::System::Void OnStartFrameValueChanged(::System::Int32 startFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMEFFECT_ONSTARTFRAMEVALUECHANGED_OFFSET))(this, startFrame);
		}

		::System::Void OnStartTimeValueChanged(::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMEFFECT_ONSTARTTIMEVALUECHANGED_OFFSET))(this, startTime);
		}
	};
}

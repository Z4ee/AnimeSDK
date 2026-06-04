#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class OverrideTransform; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_CLASS_1_5ADB076CDD392373__CTOR_OFFSET UNITYSDK_OFFSET(0xD0337D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransformMixer_Class_1_5ADB076CDD392373_TypeDefinitionIndex = 45299;

	class OverrideTransformMixer_Class_1_5ADB076CDD392373 : public ::System::Object
	{
	public:
		::RPGTools::Timeline::OverrideTransform* Field_1_0; // 0x10
		::RPGTools::Timeline::OverrideTransform_ControlType Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_CLASS_1_5ADB076CDD392373__CTOR_OFFSET))(this);
		}
	};
}

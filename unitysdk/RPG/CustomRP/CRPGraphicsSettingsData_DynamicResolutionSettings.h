#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DYNAMICRESOLUTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A70560)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_DynamicResolutionSettings_TypeDefinitionIndex = 29284;

	class CRPGraphicsSettingsData_DynamicResolutionSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Single ScaleLowerBound; // 0x14
		::System::Single ScaleUpperBound; // 0x18
		::System::Int32 FrameSize; // 0x1C
		::System::Int32 FrameThresholdUpScale; // 0x20
		::System::Int32 FrameThresholdDownScale; // 0x24
		::System::Single ScalePerFrame; // 0x28
		::System::Single WeightExp; // 0x2C
		::System::Single TimeBudget; // 0x30
		::System::Single DebugScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DYNAMICRESOLUTIONSETTINGS__CTOR_OFFSET))(this);
		}
	};
}

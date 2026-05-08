#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_GET_INSERTSUBSECTIONLENGTH_OFFSET UNITYSDK_OFFSET(0x79E050)
#define MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_GET_SUBSECTIONBACKTRACEDISTANCE_OFFSET UNITYSDK_OFFSET(0x79E050)
#define MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_ISVALID_OFFSET UNITYSDK_OFFSET(0x79E060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GuidePoint_AutoGenStrategy_TypeDefinitionIndex = 45985;

	struct alignas(8) GuidePoint_AutoGenStrategy
	{
		::System::String* strategyID; // 0x10
		::System::Single subSectionLength; // 0x18
		::System::Single subSectionYOffset; // 0x1C
		::System::Single minimumSubSectionRemoveLength; // 0x20
		::System::Single subSectionAngle; // 0x24
		::System::Single subSectionMinHeight; // 0x28
		::System::Single subSectionHitRadius; // 0x2C
		::System::Single agentRadius; // 0x30
		::System::Single edgeAvoidDistance; // 0x34
		::System::Single gapHeight; // 0x38
		::System::Single forceReCalcPathLength; // 0x3C
		::System::Single forceReCalcPathMinInterval; // 0x40
		::System::Int32 midPointMinCount; // 0x44
		::System::Single minTargetReachedDistance; // 0x48
		::System::Single maxLastPointReachedDistance; // 0x4C
		::System::Single moveTargetCheck_MinDistance; // 0x50
		::System::Single moveTargetCheck_MinInterval; // 0x54

		::System::Single get_subSectionBackTraceDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_GET_SUBSECTIONBACKTRACEDISTANCE_OFFSET))(this);
		}

		::System::Single get_insertSubSectionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_GET_INSERTSUBSECTIONLENGTH_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GUIDEPOINT_AUTOGENSTRATEGY_ISVALID_OFFSET))(this);
		}
	};
}

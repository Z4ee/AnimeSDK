#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupSuiteChangeData_TypeDefinitionIndex = 62352;

	struct alignas(4) GroupSuiteChangeData
	{
		::System::UInt32 GroupId; // 0x10
		::Foundation::ViewObject::SuiteInfo OldSuiteInfo; // 0x14
		::Foundation::ViewObject::SuiteInfo NewSuiteInfo; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_TICKTIME_NEW_1_OFFSET UNITYSDK_OFFSET(0x1FC0C130)
#define FOUNDATION_TICKTIME_NEW_OFFSET UNITYSDK_OFFSET(0x1FC0C110)
#define FOUNDATION_TICKTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xAD0B00)

namespace Foundation
{
	inline static constexpr unsigned int TickTime_TypeDefinitionIndex = 8829;

	struct alignas(8) TickTime
	{
		::System::Double Time; // 0x10
		::System::Double ActualTime; // 0x18
		::System::Single DeltaTime; // 0x20

		::System::Void _ctor(::System::Double time, ::System::Double actualTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TICKTIME__CTOR_OFFSET))(this, time, actualTime, deltaTime);
		}

		static ::Foundation::TickTime New(::System::Double time, ::System::Single deltaTime)
		{
			return ((::Foundation::TickTime(*)(::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TICKTIME_NEW_OFFSET))(time, deltaTime);
		}

		static ::Foundation::TickTime New_1(::System::Double time, ::System::Single deltaTime, ::System::Double actualTime)
		{
			return ((::Foundation::TickTime(*)(::System::Double, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_TICKTIME_NEW_1_OFFSET))(time, deltaTime, actualTime);
		}
	};
}

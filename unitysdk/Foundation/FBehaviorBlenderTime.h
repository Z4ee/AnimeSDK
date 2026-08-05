#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_FBEHAVIORBLENDERTIME_GETALPHA_OFFSET UNITYSDK_OFFSET(0xAB21D0)
#define FOUNDATION_FBEHAVIORBLENDERTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2190)

namespace Foundation
{
	inline static constexpr unsigned int FBehaviorBlenderTime_TypeDefinitionIndex = 8830;

	struct alignas(8) FBehaviorBlenderTime
	{
		::System::Double _startTime; // 0x10
		::System::Double _endTime; // 0x18
		::Foundation::Variable_2<::System::Single, ::System::Double> _alpha; // 0x20

		::System::Void _ctor(::System::Double startTime, ::System::Double endTime, ::Foundation::Variable_2<::System::Single, ::System::Double> alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::Foundation::Variable_2<::System::Single, ::System::Double>))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORBLENDERTIME__CTOR_OFFSET))(this, startTime, endTime, alpha);
		}

		::System::Boolean GetAlpha(::System::Double timestamp, ::System::Single& alpha)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORBLENDERTIME_GETALPHA_OFFSET))(this, timestamp, alpha);
		}
	};
}

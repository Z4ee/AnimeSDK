#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_AXISBASE_VALIDATE_OFFSET UNITYSDK_OFFSET(0xAACB10)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisBase_TypeDefinitionIndex = 34747;

	struct alignas(4) AxisBase
	{
		::System::Single m_Value; // 0x10
		::System::Single m_MinValue; // 0x14
		::System::Single m_MaxValue; // 0x18
		::System::Boolean m_Wrap; // 0x1C

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISBASE_VALIDATE_OFFSET))(this);
		}
	};
}

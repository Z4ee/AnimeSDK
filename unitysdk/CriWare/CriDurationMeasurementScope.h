#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIDURATIONMEASUREMENTSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0)
#define CRIWARE_CRIDURATIONMEASUREMENTSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace CriWare
{
	inline static constexpr unsigned int CriDurationMeasurementScope_TypeDefinitionIndex = 40136;

	struct alignas(1) CriDurationMeasurementScope
	{
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDURATIONMEASUREMENTSCOPE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIDURATIONMEASUREMENTSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}

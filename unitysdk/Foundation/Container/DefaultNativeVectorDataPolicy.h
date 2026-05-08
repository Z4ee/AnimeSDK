#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORDATAPOLICY_CALCULATECAPACITYFORRESERVE_OFFSET UNITYSDK_OFFSET(0x1BC9F7B0)

namespace Foundation::Container
{
	inline static constexpr unsigned int DefaultNativeVectorDataPolicy_TypeDefinitionIndex = 8991;

	class DefaultNativeVectorDataPolicy : public ::System::Object
	{
	public:
		static ::System::Int64 CalculateCapacityForReserve(::System::Int64 desiredNumber, ::System::Int64 elementSize)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORDATAPOLICY_CALCULATECAPACITYFORRESERVE_OFFSET))(desiredNumber, elementSize);
		}
	};
}

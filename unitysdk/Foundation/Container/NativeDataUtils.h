#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_CONTAINER_NATIVEDATAUTILS_ENSURECACHELINELENGTH_OFFSET UNITYSDK_OFFSET(0x1F79BB40)

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeDataUtils_TypeDefinitionIndex = 8554;

	class NativeDataUtils : public ::System::Object
	{
	public:
		static ::System::Int64 EnsureCacheLineLength(::System::Int64 capacity, ::System::Int64 elementSize)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEDATAUTILS_ENSURECACHELINELENGTH_OFFSET))(capacity, elementSize);
		}
	};
}

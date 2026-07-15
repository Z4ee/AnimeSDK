#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RTCGeometryType_TypeDefinitionIndex = 45241;

	enum class EmbreeWrapper_RTCGeometryType : ::System::Int32
	{
		RTC_GEOMETRY_TYPE_TRIANGLE = 0,
		RTC_GEOMETRY_TYPE_QUAD = 1,
		RTC_GEOMETRY_TYPE_SUBDIVISION = 8,
	};
}

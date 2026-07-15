#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RTCBufferType_TypeDefinitionIndex = 45242;

	enum class EmbreeWrapper_RTCBufferType : ::System::Int32
	{
		RTC_BUFFER_TYPE_INDEX = 0,
		RTC_BUFFER_TYPE_VERTEX = 1,
		RTC_BUFFER_TYPE_VERTEX_ATTRIBUTE = 2,
	};
}

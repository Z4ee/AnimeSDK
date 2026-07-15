#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RTCHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RTCRay.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapperUnsafe_RTCRayHit_TypeDefinitionIndex = 45252;

	struct alignas(4) EmbreeWrapperUnsafe_RTCRayHit
	{
		::RPG::Embree::EmbreeWrapperUnsafe_RTCRay ray; // 0x10
		::RPG::Embree::EmbreeWrapperUnsafe_RTCHit hit; // 0x40
	};
}

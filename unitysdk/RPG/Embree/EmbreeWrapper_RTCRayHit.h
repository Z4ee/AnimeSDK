#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRay.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RTCRayHit_TypeDefinitionIndex = 47482;

	struct alignas(4) EmbreeWrapper_RTCRayHit
	{
		::RPG::Embree::EmbreeWrapper_RTCRay ray; // 0x10
		::RPG::Embree::EmbreeWrapper_RTCHit hit; // 0x40
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_BatchAnimationInfo_TypeDefinitionIndex = 74386;

	struct alignas(8) AirlineSubwayWay_BatchAnimationInfo
	{
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18
		::UnityEngine::Vector3 AnchorLocalOffset; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo_Type.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class TrackAsset; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BindInfo_BindReference_TypeDefinitionIndex = 46717;

	struct alignas(8) BindInfo_BindReference
	{
		::RPGTools::Timeline::BindInfo_Type Type; // 0x10
		::UnityEngine::Timeline::TrackAsset* Track; // 0x18
		::System::String* ExposedKey; // 0x20
	};
}

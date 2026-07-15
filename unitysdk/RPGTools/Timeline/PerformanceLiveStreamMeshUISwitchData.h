#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamMeshUISwitchData_TypeDefinitionIndex = 46120;

	struct alignas(8) PerformanceLiveStreamMeshUISwitchData
	{
		::System::Boolean IsOpen; // 0x10
		::System::Int32 OutlineType; // 0x14
		::UnityEngine::Vector2 CenterPoint; // 0x18
		::System::Single Scale; // 0x20
		::System::Single Rotation; // 0x24
		::System::String* OutlineColor; // 0x28
	};
}

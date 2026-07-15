#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/PassageConnectivity.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace StageBudgetTool
{
	inline static constexpr unsigned int VolumeToRoomConnnectivity_TypeDefinitionIndex = 45955;

	struct alignas(8) VolumeToRoomConnnectivity
	{
		::System::String* RoomAlias; // 0x10
		::StageBudgetTool::PassageConnectivity Connectivity; // 0x18
	};
}

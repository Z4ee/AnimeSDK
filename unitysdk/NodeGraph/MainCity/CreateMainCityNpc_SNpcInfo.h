#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CreateMainCityNpc_SNpcInfo_TypeDefinitionIndex = 54476;

	struct alignas(8) CreateMainCityNpc_SNpcInfo
	{
		::System::Int32 Tag; // 0x10
		::System::Boolean CreateNameUI; // 0x14
		::System::String* BornPosition; // 0x18
		::System::Boolean Teleport; // 0x20
	};
}

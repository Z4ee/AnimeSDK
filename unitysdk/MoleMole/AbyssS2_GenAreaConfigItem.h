#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenAreaConfigItem_TypeDefinitionIndex = 82334;

	struct alignas(4) AbyssS2_GenAreaConfigItem
	{
		::System::Int32 cfgID; // 0x10
		::System::Int32 cfgValue; // 0x14
	};
}

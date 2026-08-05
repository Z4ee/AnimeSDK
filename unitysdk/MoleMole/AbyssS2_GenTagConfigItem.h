#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenTagConfigItem_TypeDefinitionIndex = 87626;

	struct alignas(8) AbyssS2_GenTagConfigItem
	{
		::System::String* cfgTagID; // 0x10
		::System::Int32 cfgValue; // 0x18
	};
}

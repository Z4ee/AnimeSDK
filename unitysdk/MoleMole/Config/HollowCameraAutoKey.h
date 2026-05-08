#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraAutoKey_TypeDefinitionIndex = 64842;

	struct alignas(8) HollowCameraAutoKey
	{
		::System::String* MoveKey; // 0x10
		::System::String* BackKey; // 0x18
		::System::String* CenterKey; // 0x20
	};
}

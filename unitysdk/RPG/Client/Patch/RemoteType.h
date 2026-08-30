#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Patch
{
	inline static constexpr unsigned int RemoteType_TypeDefinitionIndex = 80858;

	enum class RemoteType : ::System::UInt16
	{
		None = 0x0,
		Source = 0x1,
		Block = 0x2,
		Zip = 0x4,
		Patch = 0x8,
	};
}

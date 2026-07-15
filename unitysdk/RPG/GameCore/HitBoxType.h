#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitBoxType_TypeDefinitionIndex = 54310;

	enum class HitBoxType : ::System::Byte
	{
		eNone = 0x0,
		eBox3 = 0x1,
		eCapsule3 = 0x2,
	};
}

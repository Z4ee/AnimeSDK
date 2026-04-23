#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarUtils_MultiPathAvatarCache_TypeDefinitionIndex = 61071;

	struct alignas(4) MultiPathAvatarUtils_MultiPathAvatarCache
	{
		::System::Boolean Exist; // 0x10
		::System::UInt32 BaseID; // 0x14
		::RPG::GameCore::GenderType Gender; // 0x18
	};
}

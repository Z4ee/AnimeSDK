#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class InLevelAvatarDataItem; }

namespace MoleMole
{
	inline static constexpr unsigned int TeamUniqueAbility_TypeDefinitionIndex = 78339;

	struct alignas(8) TeamUniqueAbility
	{
		::System::Int32 abilityId; // 0x10
		::System::Int32 priority; // 0x14
		::MoleMole::InLevelAvatarDataItem* avatarDataItem; // 0x18
	};
}

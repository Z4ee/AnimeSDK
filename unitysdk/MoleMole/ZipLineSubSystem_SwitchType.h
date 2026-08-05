#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_SwitchType_TypeDefinitionIndex = 63894;

	enum class ZipLineSubSystem_SwitchType : ::System::Int32
	{
		None = 0,
		TeamAvatar = 1,
		OtherAvatar = 3,
		PlusOneAvatar = 2,
	};
}

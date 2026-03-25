#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdAssetsPathConfig_CrowdVariantPathDict_TypeDefinitionIndex = 60429;

	struct alignas(8) CrowdAssetsPathConfig_CrowdVariantPathDict
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}

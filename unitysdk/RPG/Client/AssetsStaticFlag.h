#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AssetsStaticFlag_TypeDefinitionIndex = 39314;

	enum class AssetsStaticFlag : ::System::UInt16
	{
		SUBPACK_STARTUP = 0x0,
		SUBPACK_BASE_PLAY = 0x1,
		SUBPACK_BASE_PLAY_EXT = 0x2,
		SUBPACK_FEATURE = 0x3,
		SUBPACK_DISCARD_DIRECTORY_NOT_BUILD_ASB = 0x4,
		SUBPACK_DISCARD_SELF_AND_DEPENDENCY = 0x5,
		SUBPACK_UNUSE_6 = 0x6,
		SUBPACK_UNUSE_7 = 0x7,
		SUBPACK_MARK = 0x7,
		ASSETS_IN_APP = 0x8,
		ASSETS_IN_ASB_RES = 0x10,
		ASSETS_CIRCULAR_DEPENDENCY = 0x20,
	};
}

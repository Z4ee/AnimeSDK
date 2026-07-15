#pragma once
#include "unitysdk/unitysdk.h"

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager_HotReloadCommand_TypeDefinitionIndex = 45994;

	enum class IRICarTestManager_HotReloadCommand : ::System::Int32
	{
		ReloadVolumeTemplates = 1,
		GetPlatformInfo = 2,
	};
}

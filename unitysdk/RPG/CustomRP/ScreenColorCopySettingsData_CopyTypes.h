#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ScreenColorCopySettingsData_CopyTypes_TypeDefinitionIndex = 36312;

	enum class ScreenColorCopySettingsData_CopyTypes : ::System::Int32
	{
		AfterOpaqueOnly = 0,
		AfterTransparentOnly = 1,
		AfterOpaqueAndTransparent = 2,
	};
}

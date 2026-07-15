#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindReceiverMonoPlugin_GizmoPreviewType_TypeDefinitionIndex = 67860;

	enum class EnvWindReceiverMonoPlugin_GizmoPreviewType : ::System::Int32
	{
		SelectedOnly = 0,
		Always = 1,
		Never = 2,
	};
}

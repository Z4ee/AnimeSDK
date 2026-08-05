#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigScreenEffectCtrlNode_ScreenEffectCtrlType_TypeDefinitionIndex = 50028;

	enum class ConfigScreenEffectCtrlNode_ScreenEffectCtrlType : ::System::Int32
	{
		Play = 0,
		Stop = 1,
	};
}

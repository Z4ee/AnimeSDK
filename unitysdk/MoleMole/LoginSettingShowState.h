#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoginSettingShowState_TypeDefinitionIndex = 43540;

	enum class LoginSettingShowState : ::System::Int32
	{
		ForceHide = 2,
		ForceShow = 1,
		Default = 0,
	};
}

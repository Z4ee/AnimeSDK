#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoginSettingShowState_TypeDefinitionIndex = 58394;

	enum class LoginSettingShowState : ::System::Int32
	{
		ForceShow = 1,
		Default = 0,
		ForceHide = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 83173;

	enum class InputGroup : ::System::Int32
	{
		CharacterMove = 0,
		All = 7,
		CharacterSwitchMute = 5,
		CharacterSkill = 1,
		CharacterUI = 2,
		NotSkillHUD = 6,
		CharacterQTEMute = 4,
		None = 8,
		CameraMove = 3,
	};
}

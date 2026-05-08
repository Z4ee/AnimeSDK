#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 44984;

	enum class InputGroup : ::System::Int32
	{
		CharacterUI = 2,
		All = 7,
		CharacterQTEMute = 4,
		CharacterSwitchMute = 5,
		CameraMove = 3,
		None = 8,
		CharacterSkill = 1,
		NotSkillHUD = 6,
		CharacterMove = 0,
	};
}

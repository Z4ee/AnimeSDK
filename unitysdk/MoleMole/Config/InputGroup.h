#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 76204;

	enum class InputGroup : ::System::Int32
	{
		CharacterUI = 2,
		CharacterSwitchMute = 5,
		CharacterSkill = 1,
		None = 8,
		CameraMove = 3,
		NotSkillHUD = 6,
		CharacterQTEMute = 4,
		All = 7,
		CharacterMove = 0,
	};
}

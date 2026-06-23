#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputType_TypeDefinitionIndex = 57314;

	enum class InputType : ::System::Int32
	{
		HUDItem = 7,
		ManualCoAttack = 17,
		SkillBangbooAttack = 18,
		CamRotate = 6,
		RunMove = 26,
		Chip = 8,
		SkillBangbooSpecial = 21,
		Map = 9,
		CamZoom = 5,
		CharacterQTE = 10,
		SkillD = 3,
		MaxCount = 30,
		HUDNotSkill = 25,
		SkillSoloAid = 15,
		SkillA = 1,
		Interact = 24,
		SkillSoloQTE = 16,
		CityRun = 13,
		SkillBangbooEvade = 19,
		SkillFunction = 14,
		SkillB = 2,
		SkillUltra = 4,
		CharacterSwitch = 11,
		SkillBangbooAbyssUltra = 22,
		ZipLineTurnBack = 28,
		SkillEtherEyes = 23,
		ZipLineChange = 27,
		SkillBangbooJump = 20,
		InputLast = 29,
		Move = 0,
		InLevelPause = 12,
	};
}

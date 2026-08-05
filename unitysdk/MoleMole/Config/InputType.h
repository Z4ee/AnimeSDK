#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputType_TypeDefinitionIndex = 77219;

	enum class InputType : ::System::Int32
	{
		ZipLineChange = 27,
		HUDItem = 7,
		Move = 0,
		ManualCoAttack = 17,
		CharacterSwitch = 11,
		Chip = 8,
		SkillUltra = 4,
		SkillBangbooEvade = 19,
		HUDNotSkill = 25,
		ZenkovUseItem = 31,
		SkillZenkovPyrois = 30,
		SkillB = 2,
		MaxCount = 34,
		SkillFunction = 14,
		RunMove = 26,
		InLevelPause = 12,
		SkillBangbooSpecial = 21,
		SkillBangbooAttack = 18,
		SkillA = 1,
		SkillSoloAid = 15,
		SkillHackLittleRobot = 32,
		InputLast = 33,
		SkillBangbooAbyssUltra = 22,
		SkillBangbooJump = 20,
		CharacterQTE = 10,
		CamZoom = 5,
		SkillSoloQTE = 16,
		SkillD = 3,
		Interact = 24,
		SkillZenkovYokai = 29,
		SkillEtherEyes = 23,
		CamRotate = 6,
		Map = 9,
		ZipLineTurnBack = 28,
		CityRun = 13,
	};
}

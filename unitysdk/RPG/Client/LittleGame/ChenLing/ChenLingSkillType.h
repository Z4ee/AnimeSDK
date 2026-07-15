#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSkillType_TypeDefinitionIndex = 73921;

	enum class ChenLingSkillType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Atk = 2,
		Enhance = 3,
	};
}

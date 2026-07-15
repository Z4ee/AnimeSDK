#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TemplateEffectType_TypeDefinitionIndex = 24054;

	enum class Match3TemplateEffectType : ::System::Int32
	{
		ChessBoardTemplate = 0,
		ActivizationArea = 1,
		ScoreBonus = 2,
	};
}

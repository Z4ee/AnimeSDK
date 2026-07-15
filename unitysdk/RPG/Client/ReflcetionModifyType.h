#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ReflcetionModifyType_TypeDefinitionIndex = 66875;

	enum class ReflcetionModifyType : ::System::Int32
	{
		TeamLight = 0,
		TeamDark = 1,
		SkillTarget = 2,
		AllChara = 3,
		OwnerEffectTarget = 4,
		LocalPlayer = 5,
		NoneTarget = 6,
	};
}

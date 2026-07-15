#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCoreEventType_TypeDefinitionIndex = 17597;

	enum class CakeRaceCoreEventType : ::System::Int32
	{
		None = 0,
		ThrowTrash = 1,
		BeforeSectionStart = 2,
		SectionStart = 3,
		SectionEnd = 4,
	};
}

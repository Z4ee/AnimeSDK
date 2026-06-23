#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageAligmentPref_TypeDefinitionIndex = 42760;

	enum class LanguageAligmentPref : ::System::Int32
	{
		Right = 2,
		None = 0,
		Left = 1,
	};
}

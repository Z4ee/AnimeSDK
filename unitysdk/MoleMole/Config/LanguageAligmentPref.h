#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageAligmentPref_TypeDefinitionIndex = 42618;

	enum class LanguageAligmentPref : ::System::Int32
	{
		Right = 2,
		Left = 1,
		None = 0,
	};
}

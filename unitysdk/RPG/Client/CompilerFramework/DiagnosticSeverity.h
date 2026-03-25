#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CompilerFramework
{
	inline static constexpr unsigned int DiagnosticSeverity_TypeDefinitionIndex = 32177;

	enum class DiagnosticSeverity : ::System::Int32
	{
		Info = 0,
		Warning = 1,
		Error = 2,
	};
}

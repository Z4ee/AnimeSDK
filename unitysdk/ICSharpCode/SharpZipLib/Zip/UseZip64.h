#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int UseZip64_TypeDefinitionIndex = 6842;

	enum class UseZip64 : ::System::Int32
	{
		Off = 0,
		On = 1,
		Dynamic = 2,
	};
}

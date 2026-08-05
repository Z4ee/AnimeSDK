#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int TestStrategy_TypeDefinitionIndex = 6865;

	enum class TestStrategy : ::System::Int32
	{
		FindFirstError = 0,
		FindAllErrors = 1,
	};
}

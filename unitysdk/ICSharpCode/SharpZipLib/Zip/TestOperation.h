#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int TestOperation_TypeDefinitionIndex = 6862;

	enum class TestOperation : ::System::Int32
	{
		Initialising = 0,
		EntryHeader = 1,
		EntryData = 2,
		EntryComplete = 3,
		MiscellaneousTests = 4,
		Complete = 5,
	};
}

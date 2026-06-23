#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::GZip
{
	inline static constexpr unsigned int GZipOutputStream_OutputState_TypeDefinitionIndex = 6807;

	enum class GZipOutputStream_OutputState : ::System::Int32
	{
		Header = 0,
		Footer = 1,
		Finished = 2,
		Closed = 3,
	};
}

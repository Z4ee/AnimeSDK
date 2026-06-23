#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int FastZip_Overwrite_TypeDefinitionIndex = 6838;

	enum class FastZip_Overwrite : ::System::Int32
	{
		Prompt = 0,
		Never = 1,
		Always = 2,
	};
}

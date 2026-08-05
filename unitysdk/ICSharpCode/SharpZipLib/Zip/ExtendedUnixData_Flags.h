#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ExtendedUnixData_Flags_TypeDefinitionIndex = 6860;

	enum class ExtendedUnixData_Flags : ::System::Byte
	{
		ModificationTime = 0x1,
		AccessTime = 0x2,
		CreateTime = 0x4,
	};
}

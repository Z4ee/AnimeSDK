#pragma once
#include "unitysdk/unitysdk.h"

namespace GameFramework::FileSystem
{
	inline static constexpr unsigned int FileSystemAccess_TypeDefinitionIndex = 41257;

	enum class FileSystemAccess : ::System::Byte
	{
		Unspecified = 0x0,
		Read = 0x1,
		Write = 0x2,
		ReadWrite = 0x3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils_StorageFormatType_TypeDefinitionIndex = 64010;

	enum class PhotoGraphUtils_StorageFormatType : ::System::Int32
	{
		None = 0,
		PNG = 1,
		JPG = 2,
	};
}

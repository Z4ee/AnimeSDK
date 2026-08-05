#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int FileFormat_TypeDefinitionIndex = 39694;

	enum class FileFormat : ::System::Int32
	{
		JSON = 0,
		SVG = 1,
	};
}

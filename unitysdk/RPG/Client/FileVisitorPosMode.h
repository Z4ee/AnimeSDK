#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FileVisitorPosMode_TypeDefinitionIndex = 9699;

	enum class FileVisitorPosMode : ::System::Int32
	{
		StreamAsset = 0,
		FirstPersistAndSecondStreamAsset = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialCacheShaderType_TypeDefinitionIndex = 66698;

	enum class MaterialCacheShaderType : ::System::Int32
	{
		Unknown = 0,
		Scene = 1,
		Character = 2,
		Mixed = 3,
		Other = 4,
	};
}

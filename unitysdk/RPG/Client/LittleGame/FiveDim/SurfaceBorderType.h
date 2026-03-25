#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SurfaceBorderType_TypeDefinitionIndex = 33399;

	enum class SurfaceBorderType : ::System::Int32
	{
		Unknown = 0,
		Left = 1,
		Right = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPhotoGraphAimInfo_KeyPointType_TypeDefinitionIndex = 65567;

	enum class MonoPhotoGraphAimInfo_KeyPointType : ::System::Int32
	{
		Center = 0,
		LeftCenter = 1,
		RightCenter = 2,
		UpCenter = 3,
		DownCenter = 4,
		LeftUp = 5,
		LeftDown = 6,
		RightUp = 7,
		RightDown = 8,
	};
}

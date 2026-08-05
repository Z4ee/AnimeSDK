#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChatPopShow_ChatCameraType_TypeDefinitionIndex = 55104;

	enum class ChatPopShow_ChatCameraType : ::System::Int32
	{
		Solo = 0,
		Multiple = 1,
		Fixed = 2,
		Default = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawItemState_TypeDefinitionIndex = 64105;

	enum class JigsawItemState : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Pending = 2,
		Active = 3,
		Availiable = 4,
		Abnormal = 5,
		Dissolved = 6,
	};
}

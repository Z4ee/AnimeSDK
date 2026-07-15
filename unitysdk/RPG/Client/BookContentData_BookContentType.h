#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookContentData_BookContentType_TypeDefinitionIndex = 63430;

	enum class BookContentData_BookContentType : ::System::Int32
	{
		None = 0,
		Text = 1,
		Picture = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadResult_TypeDefinitionIndex = 42864;

	enum class ReadResult : ::System::Int32
	{
		RrContinuereading = 1,
		RrFailrequest = 2,
		RrCancelrequest = 3,
	};
}

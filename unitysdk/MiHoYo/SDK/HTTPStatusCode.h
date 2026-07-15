#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HTTPStatusCode_TypeDefinitionIndex = 44568;

	enum class HTTPStatusCode : ::System::Int32
	{
		OK = 200,
		BadRequest = 400,
		Forbidden = 403,
		NotFound = 404,
		MethodNotAllowed = 405,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int HTTPStatusCode_TypeDefinitionIndex = 9347;

	enum class HTTPStatusCode : ::System::Int32
	{
		OK = 200,
		BadRequest = 400,
		Forbidden = 403,
		NotFound = 404,
		MethodNotAllowed = 405,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RealNameOperation_TypeDefinitionIndex = 8047;

	enum class RealNameOperation : ::System::Int32
	{
		None = 0,
		BindRealname = 1,
		ModifyRealname = 2,
		BindRealperson = 3,
		VerifyRealperson = 4,
	};
}

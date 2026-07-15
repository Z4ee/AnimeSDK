#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MemberSerialization_TypeDefinitionIndex = 9268;

	enum class MemberSerialization : ::System::Int32
	{
		OptOut = 0,
		OptIn = 1,
		Fields = 2,
	};
}

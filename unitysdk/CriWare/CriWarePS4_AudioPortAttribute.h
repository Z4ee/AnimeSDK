#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS4_AudioPortAttribute_TypeDefinitionIndex = 37767;

	enum class CriWarePS4_AudioPortAttribute : ::System::Int32
	{
		Normal = 0,
		Restricted = 65536,
		MixToMain = 131072,
	};
}

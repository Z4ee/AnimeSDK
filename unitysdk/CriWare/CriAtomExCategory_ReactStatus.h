#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactStatus_TypeDefinitionIndex = 37839;

	enum class CriAtomExCategory_ReactStatus : ::System::Int32
	{
		Stop = 0,
		FadeOut = 1,
		Hold = 2,
		FadeIn = 3,
		Error = 4,
	};
}

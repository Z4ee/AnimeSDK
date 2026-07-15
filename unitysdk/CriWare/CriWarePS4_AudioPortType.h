#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS4_AudioPortType_TypeDefinitionIndex = 37766;

	enum class CriWarePS4_AudioPortType : ::System::Int32
	{
		Main = 0,
		Bgm = 1,
		Voice = 2,
		Personal = 3,
		PadSpeaker = 4,
		Aux = 127,
	};
}

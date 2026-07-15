#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_AudioPortType_TypeDefinitionIndex = 37769;

	enum class CriWarePS5_AudioPortType : ::System::UInt16
	{
		Main = 0x0,
		Bgm = 0x1,
		Voice = 0x2,
		PadSpeaker = 0x3,
		Personal = 0x4,
		Aux = 0x5,
		Vibration = 0x6,
		ObjectMain = 0x100,
		ObjectVoice = 0x102,
		ObjecPersonal = 0x104,
	};
}

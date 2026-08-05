#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomOutputDeviceObserver_OutputDeviceType_TypeDefinitionIndex = 34891;

	enum class CriAtomOutputDeviceObserver_OutputDeviceType : ::System::Int32
	{
		BuiltinSpeaker = 0,
		WiredDevice = 1,
		WirelessDevice = 2,
	};
}

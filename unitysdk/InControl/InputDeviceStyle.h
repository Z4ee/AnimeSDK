#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceStyle_TypeDefinitionIndex = 38690;

	enum class InputDeviceStyle : ::System::Int32
	{
		Unknown = 0,
		Xbox360 = 1,
		XboxOne = 2,
		XboxSeriesX = 3,
		PlayStation2 = 4,
		PlayStation3 = 5,
		PlayStation4 = 6,
		PlayStation5 = 7,
		PlayStationVita = 8,
		PlayStationMove = 9,
		Ouya = 10,
		Steam = 11,
		AppleMFi = 12,
		AmazonFireTV = 13,
		NVIDIAShield = 14,
		NintendoNES = 15,
		NintendoSNES = 16,
		Nintendo64 = 17,
		NintendoGameCube = 18,
		NintendoWii = 19,
		NintendoWiiU = 20,
		NintendoSwitch = 21,
		GoogleStadia = 22,
		Vive = 23,
		Oculus = 24,
		Logitech = 25,
		Thrustmaster = 26,
	};
}

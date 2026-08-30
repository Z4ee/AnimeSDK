#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowTextEntryInputScope_TypeDefinitionIndex = 8549;

	enum class HoYoChannelShowTextEntryInputScope : ::System::Int32
	{
		Default = 0,
		Url = 1,
		EmailSmtpAddress = 5,
		Number = 29,
		Password = 31,
		TelephoneNumber = 32,
		Alphanumeric = 40,
		Search = 50,
		ChatWithoutEmoji = 68,
	};
}

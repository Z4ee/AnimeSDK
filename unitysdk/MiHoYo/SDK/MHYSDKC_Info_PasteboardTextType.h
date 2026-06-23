#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Info_PasteboardTextType_TypeDefinitionIndex = 36528;

	enum class MHYSDKC_Info_PasteboardTextType : ::System::Int32
	{
		WebURL = 1,
		WebSearch = 2,
		Number = 3,
		Link = 4,
		PhoneNumber = 5,
		EmailAddress = 6,
		PostalAddress = 7,
		CalendarEvent = 8,
		ShipmentTracking = 9,
		FlightNumber = 10,
		MoneyAmount = 11,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_ReportType_TypeDefinitionIndex = 8242;

	enum class HoYoPassSDK_ReportType : ::System::Int32
	{
		unknownType = 0,
		loginAccount = 1,
		logoffAccount = 1,
		logoffFacebook = 3,
		logoffTwitter = 4,
		logoffApple = 5,
		logoffGoogle = 6,
		logoffSteam = 9,
		otherLoginFacebook = 1,
		otherLoginTwitter = 2,
		otherLoginGoogle = 3,
		otherLoginApple = 4,
		otherLoginSteam = 10,
		otherLoginAuthTicketAfterRegister = 11,
		otherLoginAuthTicketByHoYoPlay = 12,
		verifyAccount = 1,
		verifyApple = 2,
		verifyGoogle = 3,
		verifyFacebook = 4,
		veirfyTwitter = 5,
		verifyExternalType = 6,
		comboLoginAuto = 2,
		comboLoginAutoPassword = 2,
		comboLoginAutoFacebook = 10,
		comboLoginAutoTwitter = 11,
		comboLoginAutoApple = 12,
		comboLoginAutoGoogle = 13,
		comboAgeGateInLogin = 2,
	};
}

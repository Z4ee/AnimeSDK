#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ActionIdType_TypeDefinitionIndex = 7552;

	enum class ActionIdType : ::System::Int32
	{
		sdkInvoke = 99,
		main = 100,
		register = 101,
		login = 102,
		active = 103,
		logout = 107,
		listAccount = 108,
		psn_bind_phone = 111,
		bind = 1001,
		psbind = 1002,
		verify = 1003,
		realname = 1004,
		oauth = 1005,
		device = 1007,
		pay = 1008,
		payment = 1009,
		realuser = 1010,
		agreements = 1016,
		restriction = 1020,
		protectiveBan = 1023,
		accountCenter = 1032,
		goodsplatform = 1030,
		consolePayment = 1040,
		start_user_policy = 1042,
		ps4bindEmail = 1044,
		ageGate = 1017,
		ageAppeal = 1018,
		parentConsent = 1019,
		banNotice = 1022,
		ageGateBan = 1024,
		paymentRestriction = 1025,
		googlePCNativeSDK = 1036,
	};
}

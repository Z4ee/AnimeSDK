#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SERVERCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x171290B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerCode_TypeDefinitionIndex = 7527;

	class ServerCode : public ::System::Object
	{
	public:
		// static const ::System::Int32 LOGIN_ERROR_SYSTEM = 0xFFFFFF9B; // 0x0
		// static const ::System::Int32 LOGIN_INVALID_SIGN = 0xFFFFFF99; // 0x0
		// static const ::System::Int32 LOGIN_INVALID_CHANNEL = 0xFFFFFF98; // 0x0
		// static const ::System::Int32 LOGIN_CHANNEL_ERROR = 0xFFFFFF95; // 0x0
		// static const ::System::Int32 LOGIN_FORBIDDEN = 0xFFFFFF94; // 0x0
		// static const ::System::Int32 LOGIN_RISK_CHECK_FAIL = 0xFFFFFF92; // 0x0
		// static const ::System::Int32 TOKEN_FORMAT_ERROR = 0xFFFFFF91; // 0x0
		// static const ::System::Int32 LOGIN_PASSPORT_SOFT_BAN = 0xFFFFFF8F; // 0x0
		// static const ::System::Int32 TOKEN_MISMATCH = 0xFFFFFF2E; // 0x0
		// static const ::System::Int32 TOKEN_INVALID = 0xFFFFFEE0; // 0x0
		// static const ::System::Int32 MAIL_EXIST = 0xFFFFFF32; // 0x0
		// static const ::System::Int32 MAIL_NOT_EXIST = 0xFFFFFF28; // 0x0
		// static const ::System::Int32 PHONE_NOT_EXIST = 0xFFFFFF27; // 0x0
		// static const ::System::Int32 PAY_FORBIDDEN = 0x7A; // 0x0
		// static const ::System::Int32 PAY_AGE_LIMIT = 0x86; // 0x0
		// static const ::System::Int32 PAY_RISK = 0x87; // 0x0
		// static const ::System::Int32 PAY_NOT_ELIGIBLE_PURCHASE = 0x8D; // 0x0
		// static const ::System::Int32 ACTION_TICKET_INVALID = 0xFFFFFEEC; // 0x0
		// static const ::System::Int32 PAY_ACCOUNT_ERROR = 0x73; // 0x0
		// static const ::System::Int32 GOOGLE_PC_TOKEN_ERROR = 0x8A; // 0x0
		// static const ::System::Int32 PGOOGLE_PC_API_ERROR = 0x8B; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_OVERDUE = 0xBBA; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_CLOSE = 0xBBB; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_FINISH = 0xBBC; // 0x0
		// static const ::System::Int32 LOGIN_AGE_GATE_NOT_ENABLE = 0xFFFFFD43; // 0x0
		// static const ::System::Int32 LOGIN_AGE_GATE_REGISTER_RESTRICTED_CHALLENGE = 0xFFFFFD41; // 0x0
		// static const ::System::Int32 RISK_EC_BEGIN = 0x12C; // 0x0
		// static const ::System::Int32 RISK_EC_BLOCKED = 0x12C; // 0x0
		// static const ::System::Int32 RISK_EC_BLOCKED_BY_GOOGLEPC = 0x12D; // 0x0
		// static const ::System::Int32 RISK_EC_END = 0x18F; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_INVALID_PARAMS = 0xFFFFF447; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_ACTION_TICKET_INVALID = 0xFFFFF445; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_TOO_MANY_REQUESTS = 0xFFFFF442; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_ACCOUNT_BANNED = 0xFFFFF37F; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_IN_GAME_CTRL = 0xFFFFF36D; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CHANGE_PASSWORD_NEEDED = 0xFFFFF34A; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_IN_GAME_CTRL_WITHIN_MANDATORYPERIOD = 0xFFFFF347; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_RISK_NEED_VERIFY = 0xFFFFF35D; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CROSS_LOGIN_INVALID_VERIFY = 0xFFFFFF9C; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CROSS_LOGIN_INVALID_PARAM = 0xFFFFF447; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_INNER_UNKNOWN_ERROR = 0xFFFFEC63; // 0x0
		// static const ::System::Int32 AGE_GATE_COMB0_REGISTER_RESTRICTED_CHALLENGE = 0xFFFFFD41; // 0x0
		// static const ::System::Int32 AGE_GATE_NOT_ENABLE = 0xFFFFEF8D; // 0x0
		// static const ::System::Int32 AGE_GATE_LOGIN_RESTRICTED_CHALLENGE = 0xFFFFEF8C; // 0x0
		// static const ::System::Int32 AGE_GATE_REGISTER_RESTRICTED_CHALLENGE = 0xFFFFEF8B; // 0x0
		// static const ::System::Int32 AGE_GATE_INTERNAL_ERROR = 0x5DC; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_PARAMS = 0xFFFFF447; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_VERIFY = 0xFFFFEF98; // 0x0
		// static const ::System::Int32 AGE_GATE_BIRTHDAY_ALREADY_SET = 0xFFFFEF97; // 0x0
		// static const ::System::Int32 AGE_GATE_CHANGE_PARENT_EMAIL_NOT_ALLOWED = 0xFFFFEF96; // 0x0
		// static const ::System::Int32 AGE_GATE_PARENT_EMAIL_RESEND_TOO_MANY = 0xFFFFEF95; // 0x0
		// static const ::System::Int32 INVALID_AGE_GATE_EMAIL = 0xFFFFEF93; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_PAYLOAD = 0xFFFFEF8F; // 0x0
		// static const ::System::Int32 AGE_GATE_BR_CHALLENGE = 0xFFFFEF7F; // 0x0
		// static const ::System::Int32 AGE_GATE_TEEN_WITHOUT_VPC = 0x94; // 0x0
		// static const ::System::Int32 AGE_GATE_NEED_PERMISSION = 0x95; // 0x0
		// static const ::System::Int32 AGE_GATE_MINOR_WITHOUT_VPC = 0x96; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_GAME_TOKEN = 0x73; // 0x0
		// static const ::System::Int32 UGC_TOKEN_INVALID = 0xFFF0BC0F; // 0x0
		// static const ::System::Int32 UGC_TOKEN_EXPIRED = 0xFFF0BC0E; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		// static const ::System::Int32 NEED_RISK_CHECK = 0xFFFFF3E3; // 0x0
		// static const ::System::Int32 CHANNEL_AUTH_TICKET_INVALID = 0xFFFFF31A; // 0x0
		// static const ::System::Int32 AID_BOUND_TO_OTHER_STEAM_ACCOUNT = 0xFFFFF317; // 0x0
		// static const ::System::Int32 STEAM_ACCOUNT_BOUND_TO_OTHER_AID = 0xFFFFF316; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERCODE__CTOR_OFFSET))(this);
		}
	};
}

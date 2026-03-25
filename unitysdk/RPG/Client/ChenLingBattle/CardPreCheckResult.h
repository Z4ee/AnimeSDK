#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_FAIL_OFFSET UNITYSDK_OFFSET(0x931F820)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x931F730)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_TOAST_OFFSET UNITYSDK_OFFSET(0x931F750)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x931F740)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_TOAST_OFFSET UNITYSDK_OFFSET(0x931F760)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SUCCESS_OFFSET UNITYSDK_OFFSET(0x931F770)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x931F810)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardPreCheckResult_TypeDefinitionIndex = 62105;

	class CardPreCheckResult : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Toast_k__BackingField; // 0x10
		::System::Boolean _IsValid_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_ISVALID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Toast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_TOAST_OFFSET))(this);
		}

		::System::Void set_Toast(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_TOAST_OFFSET))(this, value);
		}

		static ::RPG::Client::ChenLingBattle::CardPreCheckResult* Success()
		{
			return ((::RPG::Client::ChenLingBattle::CardPreCheckResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SUCCESS_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattle::CardPreCheckResult* Fail(::RPG::Client::TextID toast)
		{
			return ((::RPG::Client::ChenLingBattle::CardPreCheckResult*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_FAIL_OFFSET))(toast);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_FAIL_OFFSET UNITYSDK_OFFSET(0xB5A76E0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB5A75F0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_TOAST_OFFSET UNITYSDK_OFFSET(0xB5A7610)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB5A7600)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_TOAST_OFFSET UNITYSDK_OFFSET(0xB5A7620)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SUCCESS_OFFSET UNITYSDK_OFFSET(0xB5A7630)
#define RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A76D0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardPreCheckResult_TypeDefinitionIndex = 70916;

	class CardPreCheckResult : public ::System::Object
	{
	public:
		::System::Boolean _IsValid_k__BackingField; // 0x10
		::RPG::Client::TextID _Toast_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_ISVALID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Toast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_GET_TOAST_OFFSET))(this);
		}

		::System::Void set_Toast(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SET_TOAST_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::CardPreCheckResult* Success()
		{
			return ((::RPG::Client::ChenLingBattle::CardPreCheckResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_SUCCESS_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattle::CardPreCheckResult* Fail(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::ChenLingBattle::CardPreCheckResult*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDPRECHECKRESULT_FAIL_OFFSET))(a1);
		}
	};
}

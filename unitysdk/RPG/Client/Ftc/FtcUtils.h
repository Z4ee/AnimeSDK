#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class Product; }
namespace System { class String; }

#define RPG_CLIENT_FTC_FTCUTILS_ALLOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x19368180)
#define RPG_CLIENT_FTC_FTCUTILS_CANCHANGENICKNAME_OFFSET UNITYSDK_OFFSET(0x193682A0)
#define RPG_CLIENT_FTC_FTCUTILS_GETFTCPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x19368510)
#define RPG_CLIENT_FTC_FTCUTILS_GETGACHAPOOLFTCDESC_OFFSET UNITYSDK_OFFSET(0x19368740)
#define RPG_CLIENT_FTC_FTCUTILS_GETSHOWRESBARKEY_OFFSET UNITYSDK_OFFSET(0x19368480)
#define RPG_CLIENT_FTC_FTCUTILS_ISAGEGATEOPEN_OFFSET UNITYSDK_OFFSET(0x19368040)
#define RPG_CLIENT_FTC_FTCUTILS_ISFTCOPEN_OFFSET UNITYSDK_OFFSET(0x19367F80)
#define RPG_CLIENT_FTC_FTCUTILS__ISMINOR_OFFSET UNITYSDK_OFFSET(0x19368400)
#define RPG_CLIENT_FTC_FTCUTILS__ISUSCOUNTRY_OFFSET UNITYSDK_OFFSET(0x193680D0)

namespace RPG::Client::Ftc
{
	inline static constexpr unsigned int FtcUtils_TypeDefinitionIndex = 74652;

	class FtcUtils : public ::System::Object
	{
	public:
		// static const ::System::UInt32 GachaNormalTokenItemConfigID = 0x65; // 0x0
		// static const ::System::UInt32 GachaUpTokenItemConfigID = 0x66; // 0x0

		static ::System::Boolean IsFtcOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_ISFTCOPEN_OFFSET))();
		}

		static ::System::Boolean IsAgeGateOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_ISAGEGATEOPEN_OFFSET))();
		}

		static ::System::Boolean AllowCommunity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_ALLOWCOMMUNITY_OFFSET))();
		}

		static ::System::Boolean CanChangeNickname()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_CANCHANGENICKNAME_OFFSET))();
		}

		static ::System::Boolean _IsMinor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS__ISMINOR_OFFSET))();
		}

		static ::System::Boolean _IsUSCountry()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS__ISUSCOUNTRY_OFFSET))();
		}

		static ::System::String* GetShowResBarKey(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETSHOWRESBARKEY_OFFSET))(a1);
		}

		static ::RPG::Client::Product* GetFtcProductData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Product*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETFTCPRODUCTDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TextID GetGachaPoolFtcDesc(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETGACHAPOOLFTCDESC_OFFSET))(a1);
		}
	};
}

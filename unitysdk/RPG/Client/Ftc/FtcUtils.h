#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class Product; }
namespace System { class String; }

#define RPG_CLIENT_FTC_FTCUTILS_ALLOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x16D2E5C0)
#define RPG_CLIENT_FTC_FTCUTILS_CANCHANGENICKNAME_OFFSET UNITYSDK_OFFSET(0x16D2E770)
#define RPG_CLIENT_FTC_FTCUTILS_GETFTCPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x16D2E8C0)
#define RPG_CLIENT_FTC_FTCUTILS_GETGACHAPOOLFTCDESC_OFFSET UNITYSDK_OFFSET(0x16D2EAF0)
#define RPG_CLIENT_FTC_FTCUTILS_GETSHOWRESBARKEY_OFFSET UNITYSDK_OFFSET(0x16D2E830)
#define RPG_CLIENT_FTC_FTCUTILS_ISFTCOPEN_OFFSET UNITYSDK_OFFSET(0x16D2E4B0)
#define RPG_CLIENT_FTC_FTCUTILS__ISUNDER13YEARSOLD_OFFSET UNITYSDK_OFFSET(0x16D2E6F0)

namespace RPG::Client::Ftc
{
	inline static constexpr unsigned int FtcUtils_TypeDefinitionIndex = 71346;

	class FtcUtils : public ::System::Object
	{
	public:
		// static const ::System::UInt32 GachaNormalTokenItemConfigID = 0x65; // 0x0
		// static const ::System::UInt32 GachaUpTokenItemConfigID = 0x66; // 0x0

		static ::System::Boolean IsFtcOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_ISFTCOPEN_OFFSET))();
		}

		static ::System::Boolean AllowCommunity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_ALLOWCOMMUNITY_OFFSET))();
		}

		static ::System::Boolean CanChangeNickname()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_CANCHANGENICKNAME_OFFSET))();
		}

		static ::System::Boolean _IsUnder13YearsOld()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS__ISUNDER13YEARSOLD_OFFSET))();
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

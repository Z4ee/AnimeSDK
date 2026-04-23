#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class Product; }
namespace System { class String; }

#define RPG_CLIENT_FTC_FTCUTILS_ALLOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0xA3DCDB0)
#define RPG_CLIENT_FTC_FTCUTILS_CANCHANGENICKNAME_OFFSET UNITYSDK_OFFSET(0xA3DCF60)
#define RPG_CLIENT_FTC_FTCUTILS_GETFTCPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xA3DD0B0)
#define RPG_CLIENT_FTC_FTCUTILS_GETGACHAPOOLFTCDESC_OFFSET UNITYSDK_OFFSET(0xA3DD2E0)
#define RPG_CLIENT_FTC_FTCUTILS_GETSHOWRESBARKEY_OFFSET UNITYSDK_OFFSET(0xA3DD020)
#define RPG_CLIENT_FTC_FTCUTILS_ISFTCOPEN_OFFSET UNITYSDK_OFFSET(0xA3DCCA0)
#define RPG_CLIENT_FTC_FTCUTILS__ISUNDER13YEARSOLD_OFFSET UNITYSDK_OFFSET(0xA3DCEE0)

namespace RPG::Client::Ftc
{
	inline static constexpr unsigned int FtcUtils_TypeDefinitionIndex = 69011;

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

		static ::System::String* GetShowResBarKey(::System::UInt32 itemConfigID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETSHOWRESBARKEY_OFFSET))(itemConfigID);
		}

		static ::RPG::Client::Product* GetFtcProductData(::System::UInt32 itemConfigID, ::System::UInt32 drawTime)
		{
			return ((::RPG::Client::Product*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETFTCPRODUCTDATA_OFFSET))(itemConfigID, drawTime);
		}

		static ::RPG::Client::TextID GetGachaPoolFtcDesc(::RPG::Client::BaseGachaPoolData* gachaPoolData)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FTC_FTCUTILS_GETGACHAPOOLFTCDESC_OFFSET))(gachaPoolData);
		}
	};
}

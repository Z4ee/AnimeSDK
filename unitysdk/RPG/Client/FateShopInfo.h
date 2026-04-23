#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateCoinIncomeType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_30;
class Class_1_ACA38760E7F8B37E;
class Class_1_D17272E82AE804C2_285;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA33C0E0)
#define RPG_CLIENT_FATESHOPINFO_GET_BUFFSHOPDATA_OFFSET UNITYSDK_OFFSET(0xA357460)
#define RPG_CLIENT_FATESHOPINFO_GET_COININCOMESTATDICT_OFFSET UNITYSDK_OFFSET(0xA35AFF0)
#define RPG_CLIENT_FATESHOPINFO_GET_COIN_OFFSET UNITYSDK_OFFSET(0xA35B0D0)
#define RPG_CLIENT_FATESHOPINFO_SET_COIN_OFFSET UNITYSDK_OFFSET(0xA35B0E0)
#define RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET UNITYSDK_OFFSET(0xA357220)
#define RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xA3584A0)
#define RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET UNITYSDK_OFFSET(0xA3575F0)
#define RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA33CC90)
#define RPG_CLIENT_FATESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BB30)
#define RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET UNITYSDK_OFFSET(0xA35AE50)
#define RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET UNITYSDK_OFFSET(0xA35AEA0)
#define RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET UNITYSDK_OFFSET(0xA35ADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateShopInfo_TypeDefinitionIndex = 58992;

	class FateShopInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateCoinIncomeType, ::System::UInt32>* _CoinIncomeStatDict; // 0x10
		::RPG::Client::FateBuffShopData* _BuffShopData; // 0x18
		::System::UInt32 _Coin_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncUpdateShop(::Class_1_ACA38760E7F8B37E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET))(this, proto);
		}

		::System::Void SyncCoin(::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET))(this, coinNum);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET))(this, protoGoodsList);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _RefreshShopBaseInfo(::Class_1_ACA38760E7F8B37E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET))(this, proto);
		}

		::System::Void _RefreshCoin(::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET))(this, coinNum);
		}

		::System::Void _RefreshIncomeStat(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_285*>* statList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_285*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET))(this, statList);
		}

		::System::UInt32 get_Coin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_GET_COIN_OFFSET))(this);
		}

		::System::Void set_Coin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SET_COIN_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateCoinIncomeType, ::System::UInt32>* get_CoinIncomeStatDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateCoinIncomeType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_GET_COININCOMESTATDICT_OFFSET))(this);
		}

		::RPG::Client::FateBuffShopData* get_BuffShopData()
		{
			return ((::RPG::Client::FateBuffShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_GET_BUFFSHOPDATA_OFFSET))(this);
		}
	};
}

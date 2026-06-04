#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateCoinIncomeType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_33;
class Class_1_ACA38760E7F8B37E;
class Class_1_D17272E82AE804C2_299;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9AE450)
#define RPG_CLIENT_FATESHOPINFO_GET_BUFFSHOPDATA_OFFSET UNITYSDK_OFFSET(0xB9A9F00)
#define RPG_CLIENT_FATESHOPINFO_GET_COININCOMESTATDICT_OFFSET UNITYSDK_OFFSET(0xB9AE680)
#define RPG_CLIENT_FATESHOPINFO_GET_COIN_OFFSET UNITYSDK_OFFSET(0xB9AE760)
#define RPG_CLIENT_FATESHOPINFO_SET_COIN_OFFSET UNITYSDK_OFFSET(0xB9AE770)
#define RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET UNITYSDK_OFFSET(0xB9A9CC0)
#define RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xB9AB0C0)
#define RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET UNITYSDK_OFFSET(0xB9AA090)
#define RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB9AE230)
#define RPG_CLIENT_FATESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE220)
#define RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET UNITYSDK_OFFSET(0xB9AE400)
#define RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET UNITYSDK_OFFSET(0xB9AE500)
#define RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET UNITYSDK_OFFSET(0xB9AE370)

namespace RPG::Client
{
	inline static constexpr unsigned int FateShopInfo_TypeDefinitionIndex = 59922;

	class FateShopInfo : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffShopData* _BuffShopData; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateCoinIncomeType, ::System::UInt32>* _CoinIncomeStatDict; // 0x18
		::System::UInt32 _Coin_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncUpdateShop(::Class_1_ACA38760E7F8B37E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void SyncCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET))(this, a1);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _RefreshShopBaseInfo(::Class_1_ACA38760E7F8B37E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET))(this, a1);
		}

		::System::Void _RefreshIncomeStat(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_299*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_299*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Coin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_GET_COIN_OFFSET))(this);
		}

		::System::Void set_Coin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SET_COIN_OFFSET))(this, a1);
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

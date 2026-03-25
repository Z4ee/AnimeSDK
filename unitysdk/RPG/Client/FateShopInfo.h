#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateCoinIncomeType.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_29;
class Class_1_ACA38760E7F8B37E_1;
class Class_1_FA4F4A67B1C04320_276;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x967C740)
#define RPG_CLIENT_FATESHOPINFO_GET_BUFFSHOPDATA_OFFSET UNITYSDK_OFFSET(0x9697A00)
#define RPG_CLIENT_FATESHOPINFO_GET_COININCOMESTATDICT_OFFSET UNITYSDK_OFFSET(0x969B570)
#define RPG_CLIENT_FATESHOPINFO_GET_COIN_OFFSET UNITYSDK_OFFSET(0x969B650)
#define RPG_CLIENT_FATESHOPINFO_SET_COIN_OFFSET UNITYSDK_OFFSET(0x969B660)
#define RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET UNITYSDK_OFFSET(0x96977C0)
#define RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x9698A40)
#define RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET UNITYSDK_OFFSET(0x9697B90)
#define RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x967D2F0)
#define RPG_CLIENT_FATESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x967C2A0)
#define RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET UNITYSDK_OFFSET(0x969B3D0)
#define RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET UNITYSDK_OFFSET(0x969B420)
#define RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET UNITYSDK_OFFSET(0x969B340)

namespace RPG::Client
{
	inline static constexpr unsigned int FateShopInfo_TypeDefinitionIndex = 52043;

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

		::System::Void Sync(::Class_1_ACA38760E7F8B37E_1* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncUpdateShop(::Class_1_ACA38760E7F8B37E_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCUPDATESHOP_OFFSET))(this, proto);
		}

		::System::Void SyncCoin(::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCCOIN_OFFSET))(this, coinNum);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_SYNCREFRESHGOODS_OFFSET))(this, protoGoodsList);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _RefreshShopBaseInfo(::Class_1_ACA38760E7F8B37E_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHSHOPBASEINFO_OFFSET))(this, proto);
		}

		::System::Void _RefreshCoin(::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHCOIN_OFFSET))(this, coinNum);
		}

		::System::Void _RefreshIncomeStat(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_276*>* statList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_276*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOPINFO__REFRESHINCOMESTAT_OFFSET))(this, statList);
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

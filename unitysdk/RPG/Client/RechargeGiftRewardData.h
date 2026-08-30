#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RechargeGiftRewardStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_75;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RechargeGiftConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGEGIFTREWARDDATA_CREATEREWARDSDATA_OFFSET UNITYSDK_OFFSET(0x1B647640)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B648420)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1B648440)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B648430)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B648450)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftRewardData_TypeDefinitionIndex = 66794;

	class RechargeGiftRewardData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Items_k__BackingField; // 0x10
		::RPG::Client::RechargeGiftRewardStatus _Status_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::RechargeGiftRewardStatus a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RechargeGiftRewardStatus, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::RechargeGiftRewardStatus get_Status()
		{
			return ((::RPG::Client::RechargeGiftRewardStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_STATUS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_Items()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA_GET_ITEMS_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>* CreateRewardsData(::RPG::GameCore::RechargeGiftConfigRow* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_75*>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>*(*)(::RPG::GameCore::RechargeGiftConfigRow*, ::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_75*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA_CREATEREWARDSDATA_OFFSET))(a1, a2);
		}
	};
}

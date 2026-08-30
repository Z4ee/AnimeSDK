#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CumulativeConsumptionTierState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CumulativeConsumptionActivity; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class RechargeBenefitDataRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_CREATE_OFFSET UNITYSDK_OFFSET(0xCC82190)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GETITEMDISPLAYDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xCC830E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_ID_OFFSET UNITYSDK_OFFSET(0xCC82F30)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCC82F80)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCC82FF0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0xCC81600)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xCC83170)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC83090)

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionTier_TypeDefinitionIndex = 63603;

	class CumulativeConsumptionTier : public ::System::Object
	{
	public:
		::RPG::Client::CumulativeConsumptionActivity* _Owner; // 0x10
		::RPG::GameCore::RechargeBenefitDataRow* _Meta; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x20

		::System::Void _ctor(::RPG::GameCore::RechargeBenefitDataRow* a1, ::RPG::Client::CumulativeConsumptionActivity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeBenefitDataRow*, ::RPG::Client::CumulativeConsumptionActivity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_TargetQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_TARGETQUANTITY_OFFSET))(this);
		}

		::RPG::Client::CumulativeConsumptionTierState get_State()
		{
			return ((::RPG::Client::CumulativeConsumptionTierState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_STATE_OFFSET))(this);
		}

		static ::RPG::Client::CumulativeConsumptionTier* Create(::System::UInt32 a1, ::RPG::Client::CumulativeConsumptionActivity* a2)
		{
			return ((::RPG::Client::CumulativeConsumptionTier*(*)(::System::UInt32, ::RPG::Client::CumulativeConsumptionActivity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::ItemDisplayData* GetItemDisplayDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GETITEMDISPLAYDATABYINDEX_OFFSET))(this, a1);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_TAKEREWARD_OFFSET))(this);
		}
	};
}

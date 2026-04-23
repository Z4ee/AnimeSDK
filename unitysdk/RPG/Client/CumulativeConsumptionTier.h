#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CumulativeConsumptionTierState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CumulativeConsumptionActivity; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class RechargeBenefitDataRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_CREATE_OFFSET UNITYSDK_OFFSET(0xA0E1560)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GETITEMDISPLAYDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xA0E23B0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA0E22B0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0E22D0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA0E2300)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0xA0E0BB0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA0E2430)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONTIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2360)

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionTier_TypeDefinitionIndex = 58536;

	class CumulativeConsumptionTier : public ::System::Object
	{
	public:
		::RPG::GameCore::RechargeBenefitDataRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x18
		::RPG::Client::CumulativeConsumptionActivity* _Owner; // 0x20

		::System::Void _ctor(::RPG::GameCore::RechargeBenefitDataRow* meta, ::RPG::Client::CumulativeConsumptionActivity* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeBenefitDataRow*, ::RPG::Client::CumulativeConsumptionActivity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER__CTOR_OFFSET))(this, meta, owner);
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

		static ::RPG::Client::CumulativeConsumptionTier* Create(::System::UInt32 id, ::RPG::Client::CumulativeConsumptionActivity* owner)
		{
			return ((::RPG::Client::CumulativeConsumptionTier*(*)(::System::UInt32, ::RPG::Client::CumulativeConsumptionActivity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_CREATE_OFFSET))(id, owner);
		}

		::RPG::Client::ItemDisplayData* GetItemDisplayDataByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_GETITEMDISPLAYDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONTIER_TAKEREWARD_OFFSET))(this);
		}
	};
}

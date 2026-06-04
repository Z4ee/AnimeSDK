#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CumulativeConsumptionTierState.h"
#include "unitysdk/RPG/GameCore/CumulativeConsumptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CumulativeConsumptionActivity_IServerAgent; }
namespace RPG::Client { class CumulativeConsumptionTier; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class RechargeBenefitConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_CREATE_OFFSET UNITYSDK_OFFSET(0xB720720)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xB720A90)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERINDICES_OFFSET UNITYSDK_OFFSET(0xB720970)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERSTATE_OFFSET UNITYSDK_OFFSET(0xB720D10)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB7201C0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_CURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0xB7202C0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ID_OFFSET UNITYSDK_OFFSET(0xB720180)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xB7203E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_LASTSHOWNQUANTITY_OFFSET UNITYSDK_OFFSET(0xB7205D0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_MAXQUANTITY_OFFSET UNITYSDK_OFFSET(0xB720320)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xB7201E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB7201A0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_RECORDLASTSHOWNQUANTITY_OFFSET UNITYSDK_OFFSET(0xB720B80)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB720B20)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB7207F0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY__INITTIERS_OFFSET UNITYSDK_OFFSET(0xB720840)

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionActivity_TypeDefinitionIndex = 59461;

	class CumulativeConsumptionActivity : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CumulativeConsumptionTier*>* _Tiers; // 0x10
		::RPG::Client::CumulativeConsumptionActivity_IServerAgent* _ServerAgent; // 0x18
		::RPG::GameCore::RechargeBenefitConfigRow* _Meta; // 0x20

		::System::Void _ctor(::RPG::GameCore::RechargeBenefitConfigRow* a1, ::RPG::Client::CumulativeConsumptionActivity_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeBenefitConfigRow*, ::RPG::Client::CumulativeConsumptionActivity_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::CumulativeConsumptionType get_Type()
		{
			return ((::RPG::GameCore::CumulativeConsumptionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_SCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_CURRENTQUANTITY_OFFSET))(this);
		}

		::System::UInt32 get_MaxQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_MAXQUANTITY_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_ISENABLED_OFFSET))(this);
		}

		::System::UInt32 get_LastShownQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GET_LASTSHOWNQUANTITY_OFFSET))(this);
		}

		static ::RPG::Client::CumulativeConsumptionActivity* Create(::System::UInt32 a1, ::RPG::Client::CumulativeConsumptionActivity_IServerAgent* a2)
		{
			return ((::RPG::Client::CumulativeConsumptionActivity*(*)(::System::UInt32, ::RPG::Client::CumulativeConsumptionActivity_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_CREATE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetTierIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERINDICES_OFFSET))(this);
		}

		::RPG::Client::CumulativeConsumptionTier* GetTierByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::CumulativeConsumptionTier*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERBYINDEX_OFFSET))(this, a1);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_TAKEREWARD_OFFSET))(this);
		}

		::System::Void RecordLastShownQuantity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_RECORDLASTSHOWNQUANTITY_OFFSET))(this, a1);
		}

		::RPG::Client::CumulativeConsumptionTierState GetTierState(::System::UInt32 a1)
		{
			return ((::RPG::Client::CumulativeConsumptionTierState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY_GETTIERSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitTiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONACTIVITY__INITTIERS_OFFSET))(this);
		}
	};
}

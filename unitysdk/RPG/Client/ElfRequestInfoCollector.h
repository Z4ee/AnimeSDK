#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_51;
class Class_1_7AB88D713F5121B3_52;
class Class_1_7AB88D713F5121B3_53;
class Class_1_B044E5905AB3D5EA;
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA249B40)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_INIT_OFFSET UNITYSDK_OFFSET(0xA249AF0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONCOOKRECIPE_OFFSET UNITYSDK_OFFSET(0xA24BAA0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONDELIVERRECIPE_OFFSET UNITYSDK_OFFSET(0xA24BB30)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xA249F20)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTSTART_OFFSET UNITYSDK_OFFSET(0xA249CC0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONORDERRECIPE_OFFSET UNITYSDK_OFFSET(0xA24B110)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONSELECTEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xA24A3C0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA24BBC0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHLOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA249F90)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHREQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xA24A0B0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTSTARTLOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA249D10)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__INITRECIPELOG_OFFSET UNITYSDK_OFFSET(0xA24A750)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__SELECTEVENTFINISHREQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xA24A430)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRequestInfoCollector_TypeDefinitionIndex = 58726;

	class ElfRequestInfoCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B044E5905AB3D5EA*>* ElfRecipeLogDataDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_51*>* ElfEventLogDataDic; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_52*>* ElfNormalEventRequestDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_53*>* ElfSpecialEventRequests; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void OnEventStart(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTSTART_OFFSET))(this, eventParam);
		}

		::System::Void _EventStartLogHandler(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTSTARTLOGHANDLER_OFFSET))(this, eventParam);
		}

		::System::Void OnEventFinish(::RPG::GameCore::RestaurantNormalEventType eventType, ::System::UInt32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTFINISH_OFFSET))(this, eventType, rewardID);
		}

		::System::Void OnSelectEventFinish(::System::UInt32 eventID, ::System::UInt32 eventRewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONSELECTEVENTFINISH_OFFSET))(this, eventID, eventRewardID);
		}

		::System::Void _EventFinishLogHandler(::RPG::GameCore::RestaurantNormalEventType eventType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHLOGHANDLER_OFFSET))(this, eventType);
		}

		::System::Void _EventFinishRequestHandler(::RPG::GameCore::RestaurantNormalEventType eventType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHREQUESTHANDLER_OFFSET))(this, eventType);
		}

		::System::Void _SelectEventFinishRequestHandler(::System::UInt32 eventID, ::System::UInt32 eventRewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__SELECTEVENTFINISHREQUESTHANDLER_OFFSET))(this, eventID, eventRewardID);
		}

		::System::Void _InitRecipeLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__INITRECIPELOG_OFFSET))(this);
		}

		::System::Void OnOrderRecipe(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONORDERRECIPE_OFFSET))(this, recipeID);
		}

		::System::Void OnCookRecipe(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONCOOKRECIPE_OFFSET))(this, recipeID);
		}

		::System::Void OnDeliverRecipe(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONDELIVERRECIPE_OFFSET))(this, recipeID);
		}
	};
}

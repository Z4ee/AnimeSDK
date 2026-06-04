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

#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8D08A0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_INIT_OFFSET UNITYSDK_OFFSET(0xB8D0300)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONCOOKRECIPE_OFFSET UNITYSDK_OFFSET(0xB8D1BC0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONDELIVERRECIPE_OFFSET UNITYSDK_OFFSET(0xB8D1C90)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xB8D0C70)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTSTART_OFFSET UNITYSDK_OFFSET(0xB8D09F0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONORDERRECIPE_OFFSET UNITYSDK_OFFSET(0xB8D1560)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONSELECTEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xB8D10E0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D1D60)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHLOGHANDLER_OFFSET UNITYSDK_OFFSET(0xB8D0CE0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHREQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xB8D0DB0)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTSTARTLOGHANDLER_OFFSET UNITYSDK_OFFSET(0xB8D0A40)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__INITRECIPELOG_OFFSET UNITYSDK_OFFSET(0xB8D0350)
#define RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__SELECTEVENTFINISHREQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xB8D1150)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRequestInfoCollector_TypeDefinitionIndex = 59656;

	class ElfRequestInfoCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_51*>* ElfSpecialEventRequests; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B044E5905AB3D5EA*>* ElfRecipeLogDataDic; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_52*>* ElfNormalEventRequestDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_53*>* ElfEventLogDataDic; // 0x28

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

		::System::Void OnEventStart(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTSTART_OFFSET))(this, a1);
		}

		::System::Void _EventStartLogHandler(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTSTARTLOGHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnEventFinish(::RPG::GameCore::RestaurantNormalEventType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONEVENTFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectEventFinish(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONSELECTEVENTFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _EventFinishLogHandler(::RPG::GameCore::RestaurantNormalEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHLOGHANDLER_OFFSET))(this, a1);
		}

		::System::Void _EventFinishRequestHandler(::RPG::GameCore::RestaurantNormalEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__EVENTFINISHREQUESTHANDLER_OFFSET))(this, a1);
		}

		::System::Void _SelectEventFinishRequestHandler(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__SELECTEVENTFINISHREQUESTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRecipeLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR__INITRECIPELOG_OFFSET))(this);
		}

		::System::Void OnOrderRecipe(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONORDERRECIPE_OFFSET))(this, a1);
		}

		::System::Void OnCookRecipe(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONCOOKRECIPE_OFFSET))(this, a1);
		}

		::System::Void OnDeliverRecipe(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREQUESTINFOCOLLECTOR_ONDELIVERRECIPE_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantFestivalData; }
namespace RPG::GameCore { class RestaurantDailyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFRESTAURANTDAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC8D330)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_BEGINMAINPAGEMISSION_OFFSET UNITYSDK_OFFSET(0x1AC8DAA0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_FESTIVALID_OFFSET UNITYSDK_OFFSET(0x1AC8DB40)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_FESTIVAL_OFFSET UNITYSDK_OFFSET(0x1AC7C4E0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_HASBEGINMISSION_OFFSET UNITYSDK_OFFSET(0x1AC8E1A0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_HASFESTIVAL_OFFSET UNITYSDK_OFFSET(0x1AC8DE60)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC8D3D0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1AC8DD20)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_LOCKNEXTDAYMISSION_OFFSET UNITYSDK_OFFSET(0x1AC8D5C0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_LOCKRESTAURANTMISSION_OFFSET UNITYSDK_OFFSET(0x1AC8D520)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_NEXTDAYLOCKED_OFFSET UNITYSDK_OFFSET(0x1AC8E150)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ORDERTABLEID_OFFSET UNITYSDK_OFFSET(0x1AC8DA00)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x1AC8D3F0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RANDOMEVENTNUMBER_OFFSET UNITYSDK_OFFSET(0x1AC8D960)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RANDOMEVENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x1AC8BEC0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RECOMMENDRECIPELIST_OFFSET UNITYSDK_OFFSET(0x1AC74DC0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RESTAURANTLOCKED_OFFSET UNITYSDK_OFFSET(0x1AC8DFA0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_SHAREFIELDREWARDID_OFFSET UNITYSDK_OFFSET(0x1AC8DBE0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_SPECIALCUSTOMERMAPLIST_OFFSET UNITYSDK_OFFSET(0x1AC8DDC0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_STARTMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1AC8DC80)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_TIPS_OFFSET UNITYSDK_OFFSET(0x1AC8DEE0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_WAVECONFIG_OFFSET UNITYSDK_OFFSET(0x1AC8D480)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AC8D410)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AC8D3E0)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x1AC8D400)
#define RPG_CLIENT_ELFRESTAURANTDAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC8D3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantDayData_TypeDefinitionIndex = 63783;

	class ElfRestaurantDayData : public ::System::Object
	{
	public:
		::System::UInt32 _ProgressID_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantDayData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_SET_PROGRESSID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantDailyRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantDailyRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET__ROW_OFFSET))(this);
		}

		::System::String* get_WaveConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_WAVECONFIG_OFFSET))(this);
		}

		::System::UInt32 get_LockRestaurantMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_LOCKRESTAURANTMISSION_OFFSET))(this);
		}

		::System::UInt32 get_LockNextDayMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_LOCKNEXTDAYMISSION_OFFSET))(this);
		}

		::System::UInt32 get_RandomEventNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RANDOMEVENTNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RestaurantNormalEventType>* get_RandomEventTypeList()
		{
			return ((::Il2CppArray<::RPG::GameCore::RestaurantNormalEventType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RANDOMEVENTTYPELIST_OFFSET))(this);
		}

		::System::UInt32 get_OrderTableID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ORDERTABLEID_OFFSET))(this);
		}

		::System::UInt32 get_BeginMainPageMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_BEGINMAINPAGEMISSION_OFFSET))(this);
		}

		::System::UInt32 get_FestivalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_FESTIVALID_OFFSET))(this);
		}

		::System::UInt32 get_ShareFieldRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_SHAREFIELDREWARDID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendRecipeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RECOMMENDRECIPELIST_OFFSET))(this);
		}

		::System::UInt32 get_StartMessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_STARTMESSAGEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_ISLOOP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_SpecialCustomerMapList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_SPECIALCUSTOMERMAPLIST_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantFestivalData* get_Festival()
		{
			return ((::RPG::Client::ElfRestaurantFestivalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_FESTIVAL_OFFSET))(this);
		}

		::System::Boolean get_HasFestival()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_HASFESTIVAL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Tips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_TIPS_OFFSET))(this);
		}

		::System::Boolean get_RestaurantLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_RESTAURANTLOCKED_OFFSET))(this);
		}

		::System::Boolean get_NextDayLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_NEXTDAYLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasBeginMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDAYDATA_GET_HASBEGINMISSION_OFFSET))(this);
		}
	};
}

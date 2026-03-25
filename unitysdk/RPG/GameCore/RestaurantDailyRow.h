#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A3DD0)
#define RPG_GAMECORE_RESTAURANTDAILYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantDailyRow_TypeDefinitionIndex = 10579;

	class RestaurantDailyRow : public ::System::Object
	{
	public:
		::System::String* WaveConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SpecialCustomerMapList; // 0x18
		::Il2CppArray<::System::UInt32>* RecommendRecipeList; // 0x20
		::Il2CppArray<::RPG::GameCore::RestaurantNormalEventType>* RandomEventTypeList; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::UInt32 ProgressID; // 0x34
		::System::UInt32 OrderTableID; // 0x38
		::System::UInt32 RandomEventNumber; // 0x3C
		::System::UInt32 ShareCropsRewardID; // 0x40
		::System::UInt32 FestivalID; // 0x44
		::RPG::Client::TextID Tips; // 0x48
		::System::UInt32 DayID; // 0x58
		::System::UInt32 BeginMainPageMission; // 0x5C
		::System::UInt32 StartMessageID; // 0x60
		::System::UInt32 LockNextDayMission; // 0x64
		::System::UInt32 LockRestaurantMission; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantDailyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantDailyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

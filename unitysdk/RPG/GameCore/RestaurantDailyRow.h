#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A98E0)
#define RPG_GAMECORE_RESTAURANTDAILYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A9E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantDailyRow_TypeDefinitionIndex = 11312;

	class RestaurantDailyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RestaurantNormalEventType>* RandomEventTypeList; // 0x10
		::System::String* WaveConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SpecialCustomerMapList; // 0x20
		::Il2CppArray<::System::UInt32>* RecommendRecipeList; // 0x28
		::System::Boolean IsLoop; // 0x30
		::RPG::Client::TextID Tips; // 0x38
		::System::UInt32 DayID; // 0x48
		::System::UInt32 LockRestaurantMission; // 0x4C
		::System::UInt32 LockNextDayMission; // 0x50
		::System::UInt32 ShareCropsRewardID; // 0x54
		::System::UInt32 RandomEventNumber; // 0x58
		::System::UInt32 ProgressID; // 0x5C
		::System::UInt32 FestivalID; // 0x60
		::System::UInt32 BeginMainPageMission; // 0x64
		::System::UInt32 StartMessageID; // 0x68
		::System::UInt32 OrderTableID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantDailyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantDailyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

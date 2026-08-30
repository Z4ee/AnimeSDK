#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTTRADEORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B0670)
#define RPG_GAMECORE_RESTAURANTTRADEORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantTradeOrderRow_TypeDefinitionIndex = 11340;

	class RestaurantTradeOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CostProductMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RewardProductMap; // 0x20
		::System::UInt32 OrderID; // 0x28
		::System::UInt32 CustomerID; // 0x2C
		::System::UInt32 DurationDays; // 0x30
		::RPG::Client::TextID Detail; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTRADEORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantTradeOrderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantTradeOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTRADEORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

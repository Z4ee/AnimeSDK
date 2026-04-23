#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB2D60)
#define RPG_GAMECORE_RESTAURANTPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB36B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProgressRow_TypeDefinitionIndex = 10829;

	class RestaurantProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GoalQuestIDList; // 0x10
		::System::UInt32 OpenTime; // 0x18
		::System::UInt32 ProgressID; // 0x1C
		::System::UInt32 BreakMission; // 0x20
		::System::UInt32 GoalIncome; // 0x24
		::System::UInt32 FarmerNumber; // 0x28
		::System::UInt32 TableMaxLevel; // 0x2C
		::System::UInt32 EmployeeMaxLevel; // 0x30
		::System::UInt32 BaseCustomer; // 0x34
		::System::UInt32 MenuNumber; // 0x38
		::System::UInt32 CheckDay; // 0x3C
		::System::UInt32 ChefNumber; // 0x40
		::System::UInt32 TableNumber; // 0x44
		::System::UInt32 WaiterNumber; // 0x48
		::System::UInt32 RecipeMaxLevel; // 0x4C
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantProgressRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantProgressRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFarmType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFARMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D021FD0)
#define RPG_GAMECORE_RESTAURANTFARMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D022250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFarmConfigRow_TypeDefinitionIndex = 10981;

	class RestaurantFarmConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FieldIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::RPG::GameCore::RestaurantFarmType Type; // 0x20
		::System::UInt32 FarmID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ManagerEmployeeID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFARMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFarmConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFarmConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFARMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

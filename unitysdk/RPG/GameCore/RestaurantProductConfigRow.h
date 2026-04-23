#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB2260)
#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB24B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProductConfigRow_TypeDefinitionIndex = 10882;

	class RestaurantProductConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::Boolean IsCrops; // 0x28
		::System::UInt32 ProductID; // 0x2C
		::System::UInt32 ItemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantProductConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantProductConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

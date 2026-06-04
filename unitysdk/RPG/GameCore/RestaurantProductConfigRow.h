#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AD6A70)
#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD6CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProductConfigRow_TypeDefinitionIndex = 10936;

	class RestaurantProductConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::Boolean IsCrops; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ProductID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantProductConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantProductConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

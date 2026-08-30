#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9A6F0)
#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProductConfigRow_TypeDefinitionIndex = 11361;

	class RestaurantProductConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::UInt32 ProductID; // 0x18
		::System::Boolean IsCrops; // 0x1C
		::System::UInt32 ItemID; // 0x20
		::RPG::Client::TextID Name; // 0x28

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D027460)
#define RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0275E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSpecialCustomerRow_TypeDefinitionIndex = 10976;

	class RestaurantSpecialCustomerRow : public ::System::Object
	{
	public:
		::System::String* EventConfigPath; // 0x10
		::System::UInt32 SelectEventID; // 0x18
		::System::UInt32 SpecialCustomerID; // 0x1C
		::System::UInt32 CustomerID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantSpecialCustomerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantSpecialCustomerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3AA950)
#define RPG_GAMECORE_RESTAURANTFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AAAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFOConfigRow_TypeDefinitionIndex = 11344;

	class RestaurantFOConfigRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::System::UInt32 FOID; // 0x18
		::System::UInt32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFOConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFOConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

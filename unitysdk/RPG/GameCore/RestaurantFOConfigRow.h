#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB0C00)
#define RPG_GAMECORE_RESTAURANTFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB0D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFOConfigRow_TypeDefinitionIndex = 10865;

	class RestaurantFOConfigRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 FOID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantFOConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFOConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

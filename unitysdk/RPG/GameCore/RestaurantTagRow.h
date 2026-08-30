#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9EC80)
#define RPG_GAMECORE_RESTAURANTTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantTagRow_TypeDefinitionIndex = 11349;

	class RestaurantTagRow : public ::System::Object
	{
	public:
		::System::UInt32 ColorID; // 0x10
		::System::UInt32 TagID; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantTagRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

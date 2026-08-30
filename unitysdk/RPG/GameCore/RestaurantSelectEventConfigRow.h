#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventBubbleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9E180)
#define RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSelectEventConfigRow_TypeDefinitionIndex = 11370;

	class RestaurantSelectEventConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Describe; // 0x10
		::System::UInt32 ContactsID; // 0x20
		::RPG::GameCore::RestaurantSelectEventBubbleType Type; // 0x24
		::System::UInt32 OpEffect1; // 0x28
		::System::UInt32 SelectEventID; // 0x2C
		::System::UInt32 OpEffect2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantSelectEventConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantSelectEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSELECTEVENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

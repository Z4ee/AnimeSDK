#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A6220)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A6510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantOptionEffectConfigRow_TypeDefinitionIndex = 10642;

	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ResultText; // 0x10
		::System::UInt32 EventRewardID; // 0x20
		::RPG::GameCore::RestaurantSelectionType Type; // 0x24
		::RPG::Client::TextID OptionText; // 0x28
		::System::UInt32 Param; // 0x38
		::System::UInt32 ContactsID; // 0x3C
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantOptionEffectConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantOptionEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

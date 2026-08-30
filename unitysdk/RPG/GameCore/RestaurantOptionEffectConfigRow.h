#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9A3F0)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9A6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantOptionEffectConfigRow_TypeDefinitionIndex = 11372;

	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EventRewardID; // 0x10
		::System::UInt32 ContactsID; // 0x14
		::RPG::GameCore::RestaurantSelectionType Type; // 0x18
		::RPG::Client::TextID OptionText; // 0x20
		::RPG::Client::TextID ResultText; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 Param; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantOptionEffectConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantOptionEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

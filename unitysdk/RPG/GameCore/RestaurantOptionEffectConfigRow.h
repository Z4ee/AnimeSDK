#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3ABC30)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ABF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantOptionEffectConfigRow_TypeDefinitionIndex = 11372;

	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OptionText; // 0x10
		::RPG::GameCore::RestaurantSelectionType Type; // 0x20
		::System::UInt32 EventRewardID; // 0x24
		::RPG::Client::TextID ResultText; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 Param; // 0x3C
		::System::UInt32 ContactsID; // 0x40

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTABILITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A2480)
#define RPG_GAMECORE_RESTAURANTABILITYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A27E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantAbilityConfigRow_TypeDefinitionIndex = 10596;

	class RestaurantAbilityConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* DynamicValues; // 0x10
		::Il2CppArray<::System::String*>* BuffList; // 0x18
		::RPG::GameCore::ElfTargetType TargetType; // 0x20
		::RPG::GameCore::RestaurantEmployeeAbility Type; // 0x24
		::RPG::Client::TextID Detail; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 AbilityID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTABILITYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantAbilityConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantAbilityConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTABILITYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

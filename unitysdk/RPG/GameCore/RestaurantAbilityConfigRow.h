#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTABILITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AD2AE0)
#define RPG_GAMECORE_RESTAURANTABILITYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD2E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantAbilityConfigRow_TypeDefinitionIndex = 10901;

	class RestaurantAbilityConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* BuffList; // 0x10
		::Il2CppArray<::System::Single>* DynamicValues; // 0x18
		::RPG::GameCore::ElfTargetType TargetType; // 0x20
		::System::UInt32 AbilityID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Detail; // 0x38
		::RPG::GameCore::RestaurantEmployeeAbility Type; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTABILITYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantAbilityConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantAbilityConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTABILITYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

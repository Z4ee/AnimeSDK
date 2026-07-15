#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREQUIPENCHANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CB190)
#define RPG_GAMECORE_PIXAIREQUIPENCHANTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CB320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipEnchantRow_TypeDefinitionIndex = 11689;

	class PixAirEquipEnchantRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::System::UInt32 EquipID; // 0x18
		::RPG::GameCore::PixAirEnchantmentType EnchantType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPENCHANTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipEnchantRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipEnchantRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPENCHANTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

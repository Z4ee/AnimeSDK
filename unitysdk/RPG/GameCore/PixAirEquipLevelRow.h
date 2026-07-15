#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CC290)
#define RPG_GAMECORE_PIXAIREQUIPLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CC800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipLevelRow_TypeDefinitionIndex = 11687;

	class PixAirEquipLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::RPG::GameCore::FixPoint CoolDown; // 0x18
		::RPG::GameCore::FixPoint DamagePower; // 0x20
		::RPG::GameCore::FixPoint ShieldPower; // 0x28
		::RPG::GameCore::FixPoint MultiPower; // 0x30
		::RPG::GameCore::FixPoint HastePower; // 0x38
		::RPG::GameCore::FixPoint JamPower; // 0x40
		::RPG::GameCore::FixPoint BurnPower; // 0x48
		::RPG::GameCore::FixPoint ChargePower; // 0x50
		::System::UInt32 EquipID; // 0x58
		::System::UInt32 EquipLevel; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

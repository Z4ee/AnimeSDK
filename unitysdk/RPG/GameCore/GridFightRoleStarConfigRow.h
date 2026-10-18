#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73F120)
#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D73FE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleStarConfigRow_TypeDefinitionIndex = 13507;

	class GridFightRoleStarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BackParamList; // 0x10
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyModifyList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x28
		::System::String* BackAbilityName; // 0x30
		::Il2CppArray<::System::UInt32>* FrontShowSkillIDList; // 0x38
		::System::String* AIPath; // 0x40
		::System::String* JsonOverrideConfig; // 0x48
		::Il2CppArray<::System::UInt32>* BESkillIDList; // 0x50
		::Il2CppArray<::System::UInt32>* BackShowSkillIDList; // 0x58
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x60
		::RPG::GameCore::FixPoint StanceDamageDisplay; // 0x68
		::RPG::GameCore::FixPoint BackMaxSP; // 0x70
		::RPG::GameCore::FixPoint LuckDamage; // 0x78
		::RPG::GameCore::FixPoint BackSpeedAddedRatio; // 0x80
		::RPG::Client::TextID FrontOneWordDesc; // 0x88
		::RPG::GameCore::FixPoint FrontPowerBase; // 0x98
		::RPG::GameCore::FixPoint BackInitialSP; // 0xA0
		::RPG::Client::TextID BackOneWordDesc; // 0xA8
		::RPG::GameCore::FixPoint BackPowerBase; // 0xB8
		::RPG::GameCore::FixPoint ExtraHealBase; // 0xC0
		::RPG::GameCore::FixPoint BackEnergyBar; // 0xC8
		::RPG::GameCore::FixPoint ExtraShieldBase; // 0xD0
		::RPG::GameCore::FixPoint BackSpeedRewrite; // 0xD8
		::RPG::GameCore::FixPoint BackInitialEnergyBar; // 0xE0
		::System::UInt32 BEID; // 0xE8
		::System::UInt32 ID; // 0xEC
		::RPG::GameCore::FixPoint LuckChance; // 0xF0
		::System::UInt32 Star; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleStarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleStarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

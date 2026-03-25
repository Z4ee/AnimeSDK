#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_METHOD_2_545546A276866E43_OFFSET UNITYSDK_OFFSET(0x16FA1930)
#define RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA1D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarLineupKeyLevelConfig_TypeDefinitionIndex = 16643;

	class AvatarLineupKeyLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Level; // 0x10
		::System::Int32 Promotion; // 0x14
		::System::Int32 Rank; // 0x18
		::System::Boolean IsOnLine; // 0x1C
		::Il2CppArray<::RPG::GameCore::BattleLineupSkillTreePoint*>* SkillTreePointList; // 0x20
		::System::String* SkillTreePointPreset; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupEquipmentConfig*>* EquipmentConfigList; // 0x30
		::Il2CppArray<::System::UInt32>* RelicPropertyTypeList; // 0x38
		::System::UInt32 RelicMainValue; // 0x40
		::System::UInt32 RelicSubValue; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_545546A276866E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarLineupKeyLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarLineupKeyLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_METHOD_2_545546A276866E43_OFFSET))(a1, a2);
		}
	};
}

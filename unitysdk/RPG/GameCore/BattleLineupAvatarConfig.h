#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }
namespace RPG::GameCore { class LineupAvatarDynamicParamItem; }

#define RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_METHOD_2_3AD21B586C5B5537_OFFSET UNITYSDK_OFFSET(0x1A3EFF10)
#define RPG_GAMECORE_BATTLELINEUPAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F03E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupAvatarConfig_TypeDefinitionIndex = 17397;

	class BattleLineupAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarId; // 0x10
		::System::UInt32 EnhancedId; // 0x14
		::System::Int32 Level; // 0x18
		::System::Int32 Promotion; // 0x1C
		::System::Int32 Rank; // 0x20
		::Il2CppArray<::RPG::GameCore::BattleLineupSkillTreePoint*>* SkillTreePointList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupEquipmentConfig*>* EquipmentConfigList; // 0x30
		::Il2CppArray<::System::UInt32>* RelicPropertyTypeList; // 0x38
		::System::UInt32 RelicMainValue; // 0x40
		::System::UInt32 RelicSubValue; // 0x44
		::System::UInt32 MazeBuffId; // 0x48
		::Il2CppArray<::RPG::GameCore::LineupAvatarDynamicParamItem*>* RLDynamicParamList; // 0x50
		::Il2CppArray<::RPG::GameCore::LineupAvatarDynamicParamItem*>* RLServantDynamicParamList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3AD21B586C5B5537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleLineupAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleLineupAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_METHOD_2_3AD21B586C5B5537_OFFSET))(a1, a2);
		}
	};
}

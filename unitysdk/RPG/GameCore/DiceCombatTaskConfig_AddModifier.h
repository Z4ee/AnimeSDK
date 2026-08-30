#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_30CE40DB27AF4BCB_OFFSET UNITYSDK_OFFSET(0x1DB043E0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_5A01598E34DD80FF_OFFSET UNITYSDK_OFFSET(0x1DB04540)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB044B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AddModifier_TypeDefinitionIndex = 15888;

	class DiceCombatTaskConfig_AddModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x18
		::RPG::GameCore::DynamicFloat* Stack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_30CE40DB27AF4BCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_30CE40DB27AF4BCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A01598E34DD80FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_5A01598E34DD80FF_OFFSET))(a1, a2);
		}
	};
}

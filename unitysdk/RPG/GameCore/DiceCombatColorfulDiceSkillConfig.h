#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_METHOD_2_2C577D685A1BB893_OFFSET UNITYSDK_OFFSET(0x1715E6E0)
#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1715E830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatColorfulDiceSkillConfig_TypeDefinitionIndex = 14807;

	class DiceCombatColorfulDiceSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ModifierID; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>* PreviewConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2C577D685A1BB893(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_METHOD_2_2C577D685A1BB893_OFFSET))(a1, a2);
		}
	};
}

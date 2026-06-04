#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillAIEffectConfig; }

#define RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_METHOD_2_92FE4087C67E1EA3_OFFSET UNITYSDK_OFFSET(0x196BBC00)
#define RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196BBD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatWeatherSkillConfig_TypeDefinitionIndex = 15387;

	class DiceCombatWeatherSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>* PreviewConfigs; // 0x10
		::RPG::GameCore::DiceCombatSkillAIEffectConfig* AIEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_92FE4087C67E1EA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatWeatherSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatWeatherSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_METHOD_2_92FE4087C67E1EA3_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_144FF096F2E25134_OFFSET UNITYSDK_OFFSET(0x18CD5BD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_5989AD1FEB50A399_OFFSET UNITYSDK_OFFSET(0x18CD59B0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD5AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRepeatableGambleConfig_TypeDefinitionIndex = 18635;

	class RogueActTriggerDialogueEffectRepeatableGambleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5989AD1FEB50A399(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_5989AD1FEB50A399_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_144FF096F2E25134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_144FF096F2E25134_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_144FF096F2E25134_OFFSET UNITYSDK_OFFSET(0x1D3BB480)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_7137DBF5A5A1FEB8_OFFSET UNITYSDK_OFFSET(0x1D3BB430)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRepeatableGambleConfig_TypeDefinitionIndex = 19405;

	class RogueActTriggerDialogueEffectRepeatableGambleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7137DBF5A5A1FEB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_7137DBF5A5A1FEB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_144FF096F2E25134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_6_144FF096F2E25134_OFFSET))(a1, a2);
		}
	};
}

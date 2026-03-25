#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_METHOD_6_38665DCFBC22E2F4_OFFSET UNITYSDK_OFFSET(0x175CA130)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_METHOD_6_BE24719824D70B59_OFFSET UNITYSDK_OFFSET(0x175C9F10)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175CA050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRepeatableSelectConfig_TypeDefinitionIndex = 17991;

	class RogueActTriggerDialogueEffectRepeatableSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BE24719824D70B59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_METHOD_6_BE24719824D70B59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_38665DCFBC22E2F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_METHOD_6_38665DCFBC22E2F4_OFFSET))(a1, a2);
		}
	};
}

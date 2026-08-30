#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_6_182885B00188E863_OFFSET UNITYSDK_OFFSET(0x1EE89210)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_6_F2E6DB88211C085F_OFFSET UNITYSDK_OFFSET(0x1EE891C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectListConfig_TypeDefinitionIndex = 19401;

	class RogueActTriggerDialogueEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F2E6DB88211C085F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_6_F2E6DB88211C085F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_182885B00188E863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_6_182885B00188E863_OFFSET))(a1, a2);
		}
	};
}

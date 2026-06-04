#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_529C167B5D3683F4_OFFSET UNITYSDK_OFFSET(0x19AF9F20)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_D85A2A43C5EAAC59_OFFSET UNITYSDK_OFFSET(0x19AF9D00)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF9E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRandomConfig_TypeDefinitionIndex = 18601;

	class RogueActTriggerDialogueEffectRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D85A2A43C5EAAC59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_D85A2A43C5EAAC59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_529C167B5D3683F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_529C167B5D3683F4_OFFSET))(a1, a2);
		}
	};
}

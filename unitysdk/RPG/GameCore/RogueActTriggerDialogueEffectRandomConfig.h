#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_529C167B5D3683F4_OFFSET UNITYSDK_OFFSET(0x1C49E3D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_714879DFC8F6D478_OFFSET UNITYSDK_OFFSET(0x1C49E380)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49E3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRandomConfig_TypeDefinitionIndex = 18877;

	class RogueActTriggerDialogueEffectRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_714879DFC8F6D478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_714879DFC8F6D478_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_529C167B5D3683F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_6_529C167B5D3683F4_OFFSET))(a1, a2);
		}
	};
}

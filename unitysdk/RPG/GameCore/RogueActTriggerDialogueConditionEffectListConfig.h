#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_6_F55DEB3725D13046_OFFSET UNITYSDK_OFFSET(0x1D3BB310)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_6_F8E99215D109B8E2_OFFSET UNITYSDK_OFFSET(0x1D3BB360)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueConditionEffectListConfig_TypeDefinitionIndex = 19403;

	class RogueActTriggerDialogueConditionEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F55DEB3725D13046(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_6_F55DEB3725D13046_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F8E99215D109B8E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_6_F8E99215D109B8E2_OFFSET))(a1, a2);
		}
	};
}

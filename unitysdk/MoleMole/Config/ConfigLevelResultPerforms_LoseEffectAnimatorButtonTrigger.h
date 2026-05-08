#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LoseButtonTrigger.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_LOSEEFFECTANIMATORBUTTONTRIGGER_ISSHOWTICKTAG_OFFSET UNITYSDK_OFFSET(0x7BFCE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseEffectAnimatorButtonTrigger_TypeDefinitionIndex = 70819;

	struct alignas(8) ConfigLevelResultPerforms_LoseEffectAnimatorButtonTrigger
	{
		::System::String* effectNameKey; // 0x10
		::System::String* animatorTriggerName; // 0x18
		::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger loseButtonType; // 0x20
		::System::Int32 CountDownTick_Param; // 0x24

		::System::Boolean IsShowTickTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_LOSEEFFECTANIMATORBUTTONTRIGGER_ISSHOWTICKTAG_OFFSET))(this);
		}
	};
}

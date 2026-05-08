#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShowTipEntry_ShowTipEntryConfig.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOWTIPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF96A0A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOWTIPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF96A120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShowTipEntry_TypeDefinitionIndex = 80566;

	class AnimatorEventShowTipEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::Il2CppArray<::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig>* TipEntryConfigs; // 0x58
		::System::Single Probability; // 0x60
		::System::Int32 LimitCountOfShowTips; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOWTIPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOWTIPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

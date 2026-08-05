#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B54E410)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54E4D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeBG_TypeDefinitionIndex = 49415;

	class ConfigHollowChangeBG : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* FadeInSpeed; // 0x18
		::UnityEngine::AnimationCurve* FadeOutSpeed; // 0x20
		::System::Single TargetBright; // 0x28
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x2C
		::System::Single FadeInDuration; // 0x30
		::System::Boolean needFadeIn; // 0x34
		::System::Boolean CloseNoiseEffect; // 0x35
		::System::Boolean needFadeOut; // 0x36
		::System::Single FadeOutDuration; // 0x38
		::System::Int32 PerformResID; // 0x3C
		::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType ChangeType; // 0x40
		::System::Single TargetOpacity; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

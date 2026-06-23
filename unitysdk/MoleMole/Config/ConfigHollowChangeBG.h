#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A347680)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A347740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeBG_TypeDefinitionIndex = 55222;

	class ConfigHollowChangeBG : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* FadeInSpeed; // 0x18
		::UnityEngine::AnimationCurve* FadeOutSpeed; // 0x20
		::System::Single TargetBright; // 0x28
		::System::Int32 PerformResID; // 0x2C
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x30
		::System::Single TargetOpacity; // 0x34
		::System::Single FadeOutDuration; // 0x38
		::System::Single FadeInDuration; // 0x3C
		::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType ChangeType; // 0x40
		::System::Boolean needFadeIn; // 0x44
		::System::Boolean CloseNoiseEffect; // 0x45
		::System::Boolean needFadeOut; // 0x46

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

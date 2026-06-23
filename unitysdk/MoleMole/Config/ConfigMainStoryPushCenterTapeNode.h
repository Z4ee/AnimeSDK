#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMAINSTORYPUSHCENTERTAPENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A069A90)
#define MOLEMOLE_CONFIG_CONFIGMAINSTORYPUSHCENTERTAPENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A069B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMainStoryPushCenterTapeNode_TypeDefinitionIndex = 71796;

	class ConfigMainStoryPushCenterTapeNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x18
		::System::Single Duration; // 0x20
		::System::Single Scale; // 0x24
		::System::Single ScaleDelayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYPUSHCENTERTAPENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYPUSHCENTERTAPENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

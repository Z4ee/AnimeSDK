#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1170AC20)
#define MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1170AC90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMainStoryShrinkTapesNode_TypeDefinitionIndex = 73321;

	class ConfigMainStoryShrinkTapesNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Single DuraionOffset; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

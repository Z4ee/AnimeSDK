#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17050CB0)
#define MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x17050D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayChessBGQuadFade_TypeDefinitionIndex = 49604;

	class ConfigPlayChessBGQuadFade : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Boolean FadeIn; // 0x20
		::System::Single duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

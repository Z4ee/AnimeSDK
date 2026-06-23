#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1589F1E0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1589F2A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraTeleportCenterNode_TypeDefinitionIndex = 70882;

	class ConfigChessboardCameraTeleportCenterNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::FloatUISpecialNum* MoveToCenterDuration; // 0x18
		::MoleMole::Config::AnimationCurveUISpecialNum* MoveToCenterCurve; // 0x20
		::System::Boolean UseCustomZ; // 0x28
		::System::Boolean IgnoreIfTargetInFocusRange; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

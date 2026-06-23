#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }
namespace MoleMole::Config { class Vector3UISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x170B4B80)
#define MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B4BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetCameraStateCommonNode_TypeDefinitionIndex = 62358;

	class ConfigSetCameraStateCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurveRotationY; // 0x18
		::MoleMole::Config::Vector3UISpecialNum* Position; // 0x20
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurvePositionY; // 0x28
		::MoleMole::Config::BoolUISpecialNum* IsCut; // 0x30
		::MoleMole::Config::FloatUISpecialNum* BlendTime; // 0x38
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurveRotationX; // 0x40
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurvePositionX; // 0x48
		::MoleMole::Config::StringUISpecialNum* TargetCameraStateKey; // 0x50
		::MoleMole::Config::FloatUISpecialNum* FOV; // 0x58
		::MoleMole::Config::StringUISpecialNum* CameraComponentKey; // 0x60
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurveFOV; // 0x68
		::MoleMole::Config::Vector3UISpecialNum* Rotation; // 0x70
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurvePositionZ; // 0x78
		::MoleMole::Config::AnimationCurveUISpecialNum* BlendCurveRotationZ; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

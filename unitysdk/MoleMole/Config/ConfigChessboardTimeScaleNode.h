#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12302E40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12302F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTimeScaleNode_TypeDefinitionIndex = 77091;

	class ConfigChessboardTimeScaleNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* AnimCurve; // 0x18
		::System::Single TargetTimeScaleRatio; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

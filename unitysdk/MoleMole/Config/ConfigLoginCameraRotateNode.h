#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A34DA30)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34DAA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraRotateNode_TypeDefinitionIndex = 76569;

	class ConfigLoginCameraRotateNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single rotateTime; // 0x20
		::UnityEngine::Vector3 targetRotation; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

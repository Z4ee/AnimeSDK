#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16B35490)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B35500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraFovNode_TypeDefinitionIndex = 48976;

	class ConfigLoginCameraFovNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single Fov; // 0x20
		::System::Single fovTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

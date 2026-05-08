#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1744D880)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1744D8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraMoveNode_TypeDefinitionIndex = 49865;

	class ConfigLoginCameraMoveNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single moveTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

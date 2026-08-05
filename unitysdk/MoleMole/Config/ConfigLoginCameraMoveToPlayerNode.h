#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x177DF590)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x177DF600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraMoveToPlayerNode_TypeDefinitionIndex = 91226;

	class ConfigLoginCameraMoveToPlayerNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* PositionCurve; // 0x18
		::UnityEngine::AnimationCurve* RotationCurve; // 0x20
		::UnityEngine::AnimationCurve* FovCurve; // 0x28
		::System::Single PositionMoveTime; // 0x30
		::System::Single FovTime; // 0x34
		::System::Single RotationTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

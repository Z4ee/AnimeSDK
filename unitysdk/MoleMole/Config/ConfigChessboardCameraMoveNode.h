#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A4A8040)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A8100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_TypeDefinitionIndex = 58669;

	class ConfigChessboardCameraMoveNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* MoveType; // 0x18
		::MoleMole::Config::AnimationCurveUISpecialNum* MoveToCenterCurve; // 0x20
		::MoleMole::Config::StringUISpecialNum* PredefinedKey; // 0x28
		::MoleMole::Config::StringUISpecialNum* StretchKey; // 0x30
		::MoleMole::Config::FloatUISpecialNum* MoveToCenterDuration; // 0x38
		::MoleMole::Vector2Int PieceIndexOffset; // 0x40
		::MoleMole::Config::ConfigSetSection_Order ChessboardOrder; // 0x48
		::System::Boolean EnableAudio; // 0x4C
		::System::Boolean IgnoreIfTargetInFocusRange; // 0x4D
		::System::Boolean UseFixedViewPriority; // 0x4E
		::System::Boolean UseCustomZ; // 0x4F
		::UnityEngine::Vector3 RelativePosition; // 0x50
		::UnityEngine::Vector3 DesignatedPos; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

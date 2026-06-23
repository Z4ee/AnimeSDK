#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BubbleReasonType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGOVERRIDEBUBBLESETTINGNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A352400)
#define MOLEMOLE_CONFIG_CONFIGOVERRIDEBUBBLESETTINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3524C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverrideBubbleSettingNode_TypeDefinitionIndex = 42362;

	class ConfigOverrideBubbleSettingNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean CustomReason; // 0x18
		::System::Boolean CustomStructAnim; // 0x19
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType BubbleStructAnimType; // 0x1C
		::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType BubbleReasonType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERRIDEBUBBLESETTINGNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERRIDEBUBBLESETTINGNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

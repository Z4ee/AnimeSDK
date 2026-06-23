#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x158B3F50)
#define MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x158B4010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetChessboardNode_TypeDefinitionIndex = 60614;

	class ConfigSetChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x18
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x20
		::System::Int32 EventID; // 0x28
		::Enum_3_C6E8F7731271F88A SubState; // 0x2C
		::ProtoScript::NodeVisible NodeVisible; // 0x30
		::ProtoScript::NodeState NodeState; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

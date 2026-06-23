#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1AA506F0)
#define MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA507B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFreshChessboardNode_TypeDefinitionIndex = 87116;

	class ConfigFreshChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x18
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

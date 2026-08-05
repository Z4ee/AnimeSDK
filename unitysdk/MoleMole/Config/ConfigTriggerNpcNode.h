#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BD65470)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD65530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerNpcNode_TypeDefinitionIndex = 70687;

	class ConfigTriggerNpcNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x18
		::MoleMole::Config::StringUISpecialNum* SaveUIDKey; // 0x20
		::MoleMole::Config::StringUISpecialNum* State; // 0x28
		::MoleMole::Config::FloatUISpecialNum* Duration; // 0x30
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x38
		::MoleMole::Config::IntUISpecialNum* NPCID; // 0x40
		::MoleMole::Config::IntUISpecialNum* UID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

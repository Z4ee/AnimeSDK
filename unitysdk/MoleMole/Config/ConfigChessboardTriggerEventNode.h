#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardTriggerEventNode_EventType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x159E6290)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x159E6350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_TypeDefinitionIndex = 50155;

	class ConfigChessboardTriggerEventNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigChessboardTriggerEventNode_EventType ChessboardEventType; // 0x18
		::System::Int32 EventID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

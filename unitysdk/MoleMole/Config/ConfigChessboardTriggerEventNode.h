#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardTriggerEventNode_EventType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1270F630)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1270F6F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_TypeDefinitionIndex = 42058;

	class ConfigChessboardTriggerEventNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Int32 EventID; // 0x18
		::MoleMole::Config::ConfigChessboardTriggerEventNode_EventType ChessboardEventType; // 0x1C

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

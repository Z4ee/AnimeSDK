#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12418DB0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12418E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerItemCollect_TypeDefinitionIndex = 79616;

	class ConfigChessboardTriggerItemCollect : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean NeedBlock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

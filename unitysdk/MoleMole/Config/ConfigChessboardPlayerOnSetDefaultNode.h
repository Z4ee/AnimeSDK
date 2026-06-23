#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x162A8B90)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162A8C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayerOnSetDefaultNode_TypeDefinitionIndex = 55844;

	class ConfigChessboardPlayerOnSetDefaultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B8F5860)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F5920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardHidePrvChessboardNode_TypeDefinitionIndex = 56019;

	class ConfigChessboardHidePrvChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

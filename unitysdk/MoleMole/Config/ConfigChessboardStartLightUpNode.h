#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B7E4490)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardStartLightUpNode_TypeDefinitionIndex = 67272;

	class ConfigChessboardStartLightUpNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

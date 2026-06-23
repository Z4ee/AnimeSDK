#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12B35FA0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B36060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardStartLightUpNode_TypeDefinitionIndex = 55559;

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

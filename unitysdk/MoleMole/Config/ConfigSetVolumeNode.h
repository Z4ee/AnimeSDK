#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_069E8D9A304836A6.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17D5DFD0)
#define MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5E090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetVolumeNode_TypeDefinitionIndex = 56819;

	class ConfigSetVolumeNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::Enum_3_069E8D9A304836A6 VolumeType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

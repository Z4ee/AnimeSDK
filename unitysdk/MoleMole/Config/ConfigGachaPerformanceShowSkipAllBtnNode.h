#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16C3F7E0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3F850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceShowSkipAllBtnNode_TypeDefinitionIndex = 41084;

	class ConfigGachaPerformanceShowSkipAllBtnNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

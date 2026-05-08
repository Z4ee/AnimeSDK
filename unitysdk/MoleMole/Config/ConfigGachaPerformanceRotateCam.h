#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16A8FCF0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8FD60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceRotateCam_TypeDefinitionIndex = 48601;

	class ConfigGachaPerformanceRotateCam : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

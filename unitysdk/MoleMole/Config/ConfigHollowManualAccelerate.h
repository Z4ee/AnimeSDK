#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18F36070)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F36130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowManualAccelerate_TypeDefinitionIndex = 73214;

	class ConfigHollowManualAccelerate : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean DisableAccelerate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

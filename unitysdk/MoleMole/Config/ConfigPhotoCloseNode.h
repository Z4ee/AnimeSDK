#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B4CF5F0)
#define MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CF660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCloseNode_TypeDefinitionIndex = 52666;

	class ConfigPhotoCloseNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

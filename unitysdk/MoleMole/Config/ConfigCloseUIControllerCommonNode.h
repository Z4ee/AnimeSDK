#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12D34780)
#define MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D347F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCloseUIControllerCommonNode_TypeDefinitionIndex = 69773;

	class ConfigCloseUIControllerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* UIControllerKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

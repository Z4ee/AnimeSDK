#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17D285D0)
#define MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D28690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRemoveNpcNode_TypeDefinitionIndex = 70739;

	class ConfigRemoveNpcNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* RemoveUIDKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

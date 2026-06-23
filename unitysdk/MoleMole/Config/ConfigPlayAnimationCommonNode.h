#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xE9789F0)
#define MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE978AB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayAnimationCommonNode_TypeDefinitionIndex = 73349;

	class ConfigPlayAnimationCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* AnimationName; // 0x18
		::MoleMole::Config::StringUISpecialNum* AnimCompKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

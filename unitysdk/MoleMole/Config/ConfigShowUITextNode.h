#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x177E1C10)
#define MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x177E1C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowUITextNode_TypeDefinitionIndex = 86631;

	class ConfigShowUITextNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TextKey; // 0x18
		::System::String* UIText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPRINTFNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x183C98F0)
#define MOLEMOLE_CONFIG_CONFIGPRINTFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x183C9960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPrintfNode_TypeDefinitionIndex = 43700;

	class ConfigPrintfNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* LogStr; // 0x18
		::System::String* BlackboardValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPRINTFNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPRINTFNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AtmosphereSourceType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18AD7550)
#define MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD7610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAtmosphereNode_TypeDefinitionIndex = 81041;

	class ConfigSetAtmosphereNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TargetAtmosphere; // 0x18
		::MoleMole::Config::AtmosphereSourceType AtmosphereType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

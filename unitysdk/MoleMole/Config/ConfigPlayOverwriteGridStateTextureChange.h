#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12313130)
#define MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x123131F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayOverwriteGridStateTextureChange_TypeDefinitionIndex = 55445;

	class ConfigPlayOverwriteGridStateTextureChange : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

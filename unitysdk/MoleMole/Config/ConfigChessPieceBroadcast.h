#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x10CFE720)
#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFE7E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessPieceBroadcast_TypeDefinitionIndex = 70114;

	class ConfigChessPieceBroadcast : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Int32 OverrideKey; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

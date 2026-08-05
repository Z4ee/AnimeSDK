#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x116FE1D0)
#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x116FE290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessPieceBroadcast_TypeDefinitionIndex = 42701;

	class ConfigChessPieceBroadcast : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single Duration; // 0x18
		::System::Int32 OverrideKey; // 0x1C

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

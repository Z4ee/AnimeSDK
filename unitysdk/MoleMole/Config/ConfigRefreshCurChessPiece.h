#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17539900)
#define MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x175399C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRefreshCurChessPiece_TypeDefinitionIndex = 72326;

	class ConfigRefreshCurChessPiece : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

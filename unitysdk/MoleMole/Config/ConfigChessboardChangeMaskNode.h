#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4BD503641116BB32.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1270F430)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1270F4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardChangeMaskNode_TypeDefinitionIndex = 66430;

	class ConfigChessboardChangeMaskNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Enable; // 0x18
		::Enum_3_4BD503641116BB32 EventMaskType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

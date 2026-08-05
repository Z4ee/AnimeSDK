#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x134F99E0)
#define MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE__CTOR_OFFSET UNITYSDK_OFFSET(0x134F9AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEnableChessboardManipulate_TypeDefinitionIndex = 43158;

	class ConfigEnableChessboardManipulate : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Total; // 0x18
		::System::Boolean Enable; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12D345B0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D34630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardFloorMove_TypeDefinitionIndex = 41571;

	class ConfigChessboardFloorMove : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean InsertChessboard; // 0x18
		::System::Single FadeDistance; // 0x1C
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

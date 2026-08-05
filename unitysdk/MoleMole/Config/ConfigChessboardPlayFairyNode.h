#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x116FE2D0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x116FE390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayFairyNode_TypeDefinitionIndex = 56187;

	class ConfigChessboardPlayFairyNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* FairyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

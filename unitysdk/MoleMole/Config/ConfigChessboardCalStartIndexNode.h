#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12418B70)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12418C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_TypeDefinitionIndex = 73144;

	class ConfigChessboardCalStartIndexNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* StartChessPieceIndex; // 0x18
		::MoleMole::Config::IntUISpecialNum* StartIndexType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

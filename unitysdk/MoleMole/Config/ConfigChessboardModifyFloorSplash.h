#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16C3B8F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3B9B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardModifyFloorSplash_TypeDefinitionIndex = 62195;

	class ConfigChessboardModifyFloorSplash : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_IN_VIEW_MODIFY_FLOOR_LIST; // 0x0
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashConfig; // 0x18
		::System::Boolean InsertChessboard; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

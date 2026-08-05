#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16C3B7F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3B8B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardElevatorDownSplash_TypeDefinitionIndex = 82806;

	class ConfigChessboardElevatorDownSplash : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_ELEVATOR_DOWN_CHESSBOARDUID; // 0x0
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashConfig; // 0x18
		::System::Single DelayHide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

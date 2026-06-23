#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144E08D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x144E0AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Flash___c__DisplayClass3_0_TypeDefinitionIndex = 64390;

	class ConfigHollowChessboard_Flash___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_Flash* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET))(this);
		}
	};
}

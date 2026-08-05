#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_BigTVMoveChessPieceEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ECBB0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___C__DISPLAYCLASS1_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x1B7ECBC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveChessPieceEffect___c__DisplayClass1_0_TypeDefinitionIndex = 59243;

	class ConfigHollowChessboard_BigTVMoveChessPieceEffect___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_BigTVMoveChessPieceEffect* __4__this; // 0x10
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___C__DISPLAYCLASS1_0__RUN_B__0_OFFSET))(this);
		}
	};
}

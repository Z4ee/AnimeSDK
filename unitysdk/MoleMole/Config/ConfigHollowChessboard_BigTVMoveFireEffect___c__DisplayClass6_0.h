#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_BigTVMoveFireEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186BAA70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__DISPLAYCLASS6_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x186BB5D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect___c__DisplayClass6_0_TypeDefinitionIndex = 43466;

	class ConfigHollowChessboard_BigTVMoveFireEffect___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect* __4__this; // 0x18
		::System::Boolean hasInvoked; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__DISPLAYCLASS6_0__RUN_B__0_OFFSET))(this);
		}
	};
}

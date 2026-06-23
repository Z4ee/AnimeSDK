#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBaseList; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVSWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x158A8F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvSwitchConfig_TypeDefinitionIndex = 64400;

	class ConfigHollowChessboard_TvSwitchConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* effectList; // 0x10
		::System::Single time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVSWITCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}

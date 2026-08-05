#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTRUNCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B3480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectRunContextBase_TypeDefinitionIndex = 59258;

	class ConfigHollowChessboard_ChessEffectRunContextBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTRUNCONTEXTBASE__CTOR_OFFSET))(this);
		}
	};
}

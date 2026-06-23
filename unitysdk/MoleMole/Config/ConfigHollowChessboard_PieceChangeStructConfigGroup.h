#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xE96C120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructConfigGroup_TypeDefinitionIndex = 64375;

	class ConfigHollowChessboard_PieceChangeStructConfigGroup : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* RiseHollowOutConfig; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* SinkHollowOutConfig; // 0x18
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* SinkConfig; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* RiseConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIGGROUP__CTOR_OFFSET))(this);
		}
	};
}

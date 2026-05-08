#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1424B890)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_RUN_OFFSET UNITYSDK_OFFSET(0x1424B8A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1424BA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RefreshChessPieceByServerInfo_TypeDefinitionIndex = 43445;

	class ConfigHollowChessboard_RefreshChessPieceByServerInfo : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO__CTOR_OFFSET))(this);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}
	};
}

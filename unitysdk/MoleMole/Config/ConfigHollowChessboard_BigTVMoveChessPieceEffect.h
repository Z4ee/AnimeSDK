#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x162AF740)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x162AF730)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x162AF500)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162AF790)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x162AF7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveChessPieceEffect_TypeDefinitionIndex = 64431;

	class ConfigHollowChessboard_BigTVMoveChessPieceEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowGridLink, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*>* keyMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECHESSPIECEEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}

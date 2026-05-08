#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x11CAA710)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x11CAA700)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_RUN_OFFSET UNITYSDK_OFFSET(0x11CAA580)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAA7B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x11CAA7C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RiseOrSink_TypeDefinitionIndex = 43440;

	class ConfigHollowChessboard_RiseOrSink : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType structConfigType; // 0x20
		::MoleMole::PieceModelAnimType animType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}

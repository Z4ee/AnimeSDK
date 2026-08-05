#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/System/Object.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF13B680)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_DEFAULTSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF13B6D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xF13B610)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_FULLBUTEXPECTRATIO_OFFSET UNITYSDK_OFFSET(0xF13B8C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_FULLSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF13B810)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_ONVALUECHANGED_DURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF13B770)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_TRYINVOKEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF13B980)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xF13BCD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBase_TypeDefinitionIndex = 59280;

	class ConfigHollowChessboard_ChessEffectBase : public ::System::Object
	{
	public:
		::System::Single fixedRatio; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType durationType; // 0x14
		::System::Single delayTime; // 0x18
		::System::Single fixedDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE__CTOR_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_DURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Void OnValueChanged_durationType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_ONVALUECHANGED_DURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* get_DefaultSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_DEFAULTSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* get_FullSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_FULLSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* get_FullButExpectRatio()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_GET_FULLBUTEXPECTRATIO_OFFSET))(this);
		}

		::System::Void TryInvokeEndCallback(::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASE_TRYINVOKEENDCALLBACK_OFFSET))(this, onEnd);
		}
	};
}

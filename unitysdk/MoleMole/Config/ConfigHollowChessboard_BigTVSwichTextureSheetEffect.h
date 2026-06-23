#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVSwitchReason.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A068800)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1A0687F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_INTERNALRUN_OFFSET UNITYSDK_OFFSET(0x1A068540)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x1A068040)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A068850)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A068860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwichTextureSheetEffect_TypeDefinitionIndex = 64420;

	class ConfigHollowChessboard_BigTVSwichTextureSheetEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason, ::System::String*>* TextureSheetMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Void InternalRun(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* temp, ::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext*, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_INTERNALRUN_OFFSET))(this, temp, chessPiece, endCallback);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17536760)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x17536770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RiseOrSink___c__DisplayClass2_0_TypeDefinitionIndex = 43441;

	class ConfigHollowChessboard_RiseOrSink___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* __4__this; // 0x10
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET))(this);
		}
	};
}

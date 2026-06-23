#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_CameraShake; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERASHAKE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5210)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERASHAKE___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x18AD5220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_CameraShake___c__DisplayClass2_0_TypeDefinitionIndex = 64424;

	class ConfigHollowChessboard_CameraShake___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_CameraShake* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERASHAKE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERASHAKE___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET))(this);
		}
	};
}

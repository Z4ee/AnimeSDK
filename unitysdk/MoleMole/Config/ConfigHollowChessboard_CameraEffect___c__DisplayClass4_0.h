#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54E7E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x1B54E7F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_CameraEffect___c__DisplayClass4_0_TypeDefinitionIndex = 59284;

	class ConfigHollowChessboard_CameraEffect___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_CameraEffect* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET))(this);
		}
	};
}

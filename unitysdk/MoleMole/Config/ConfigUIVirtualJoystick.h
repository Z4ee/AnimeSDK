#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C467460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIVirtualJoystick_TypeDefinitionIndex = 69971;

	class ConfigUIVirtualJoystick : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigVirtualJoystickParam* DefaultJoystickParam; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>* ArcadeMiniGameJoystickParamDict; // 0x60
		::MoleMole::Config::ConfigVirtualJoystickParam* ChessboardMiniGameJoystickParam; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK__CTOR_OFFSET))(this);
		}
	};
}

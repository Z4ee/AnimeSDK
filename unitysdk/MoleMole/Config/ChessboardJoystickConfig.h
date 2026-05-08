#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB00780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 71622;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 Angle; // 0x10
		::System::Single FixedFadeOutTime; // 0x20
		::System::Single MaxMoveInterval; // 0x24
		::System::Single OutsideDeadZonePercent; // 0x28
		::System::Single FadeOutTime; // 0x2C
		::System::Boolean IsUseJoystick; // 0x30
		::System::Boolean IsFixedJoystick; // 0x31
		::System::Boolean SafeAreaVisible; // 0x32
		::UnityEngine::Vector2 AnchorPosition; // 0x34
		::UnityEngine::Vector4 Anchor; // 0x3C
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x4C
		::UnityEngine::Vector4 SafeArea; // 0x58
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

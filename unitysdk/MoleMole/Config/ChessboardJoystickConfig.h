#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE965C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 58803;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 Anchor; // 0x10
		::UnityEngine::Vector4 SafeArea; // 0x20
		::System::Single FadeOutTime; // 0x30
		::System::Single FixedFadeOutTime; // 0x34
		::UnityEngine::Vector2 AnchorPosition; // 0x38
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x40
		::System::Single MaxMoveInterval; // 0x50
		::System::Boolean IsUseJoystick; // 0x54
		::System::Boolean IsFixedJoystick; // 0x55
		::System::Boolean SafeAreaVisible; // 0x56
		::System::Single OutsideDeadZonePercent; // 0x58
		::UnityEngine::Vector4 Angle; // 0x5C
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

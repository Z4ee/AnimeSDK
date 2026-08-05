#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF136F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 65943;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::System::Single FixedFadeOutTime; // 0x10
		::UnityEngine::Vector4 Angle; // 0x14
		::System::Boolean IsUseJoystick; // 0x24
		::System::Boolean IsFixedJoystick; // 0x25
		::System::Boolean SafeAreaVisible; // 0x26
		::UnityEngine::Vector4 Anchor; // 0x28
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x38
		::System::Single OutsideDeadZonePercent; // 0x48
		::System::Single FadeOutTime; // 0x4C
		::UnityEngine::Vector2 AnchorPosition; // 0x50
		::System::Single MaxMoveInterval; // 0x58
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x5C
		::UnityEngine::Vector4 SafeArea; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/UVAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_534;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CHESSBOARDUVANIMDEBUGTEST0_OFFSET UNITYSDK_OFFSET(0x1BD70170)
#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CREATEUVANIMPARAMS_OFFSET UNITYSDK_OFFSET(0x1BD70000)
#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD70290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardUvAnimConfig_TypeDefinitionIndex = 57648;

	class HollowChessboardUvAnimConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* offsetXCurve; // 0x10
		::UnityEngine::AnimationCurve* yCurve; // 0x18
		::UnityEngine::AnimationCurve* xCurve; // 0x20
		::UnityEngine::AnimationCurve* offsetYCurve; // 0x28
		::System::Single xDuration; // 0x30
		::System::Single offsetYDuration; // 0x34
		::System::Single offsetXDuration; // 0x38
		::System::Single yDuration; // 0x3C
		::MoleMole::HollowChessboard::UVAnimType AnimType; // 0x40
		::UnityEngine::Vector2 Anchor; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_534* CreateUVAnimParams()
		{
			return ((::Class_0_16E4307DCC419505_534*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CREATEUVANIMPARAMS_OFFSET))(this);
		}

		::System::Void ChessboardUvAnimDebugTest0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CHESSBOARDUVANIMDEBUGTEST0_OFFSET))(this);
		}
	};
}

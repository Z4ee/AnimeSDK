#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/UVAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_577;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CHESSBOARDUVANIMDEBUGTEST0_OFFSET UNITYSDK_OFFSET(0x157CD6F0)
#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CREATEUVANIMPARAMS_OFFSET UNITYSDK_OFFSET(0x157CD550)
#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157CD810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardUvAnimConfig_TypeDefinitionIndex = 59727;

	class HollowChessboardUvAnimConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* offsetYCurve; // 0x10
		::UnityEngine::AnimationCurve* yCurve; // 0x18
		::UnityEngine::AnimationCurve* offsetXCurve; // 0x20
		::UnityEngine::AnimationCurve* xCurve; // 0x28
		::System::Single offsetXDuration; // 0x30
		::UnityEngine::Vector2 Anchor; // 0x34
		::System::Single yDuration; // 0x3C
		::System::Single offsetYDuration; // 0x40
		::MoleMole::HollowChessboard::UVAnimType AnimType; // 0x44
		::System::Single xDuration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_577* CreateUVAnimParams()
		{
			return ((::Class_0_16E4307DCC419505_577*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CREATEUVANIMPARAMS_OFFSET))(this);
		}

		::System::Void ChessboardUvAnimDebugTest0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDUVANIMCONFIG_CHESSBOARDUVANIMDEBUGTEST0_OFFSET))(this);
		}
	};
}

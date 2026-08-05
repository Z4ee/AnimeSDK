#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90A180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraDrag_TypeDefinitionIndex = 71961;

	class ConfigHollowCameraDrag : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* camraZToDragCurve; // 0x10
		::UnityEngine::AnimationCurve* dragDampCurve; // 0x18
		::System::Single borderRatioW; // 0x20
		::System::Single dragDumpingTime; // 0x24
		::System::Single camraZToDragRatioDPad; // 0x28
		::System::Single borderRatioH; // 0x2C
		::System::Single borderOffset; // 0x30
		::System::Single dampBorderRatioLeft; // 0x34
		::System::Single dampBorderRatioTop; // 0x38
		::System::Single diagonalBorderRatio; // 0x3C
		::UnityEngine::Vector2 dragSpeedFactorTouch; // 0x40
		::System::Single camraZToDragRatioTouch; // 0x48
		::System::Boolean EnableDragDebug; // 0x4C
		::System::Boolean isCustomDragDampCurve; // 0x4D
		::System::Single freezeCamDragDampFactor; // 0x50
		::System::Single camraZToDragRatioMouse; // 0x54
		::System::Single dragSpeedFactorDPad; // 0x58
		::System::Single dampBorderRatioRight; // 0x5C
		::UnityEngine::Vector2 dragSpeedFactorMouse; // 0x60
		::System::Single dampBorderRatioBottom; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_CURVEGENERATESETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7B97F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting_TypeDefinitionIndex = 42044;

	struct alignas(4) BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting
	{
		static ::RPG::Editor::BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting* StaticGet_init()
		{
			return (::RPG::Editor::BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting*)Il2CppClass::FromTypeDefinitionIndex(BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting_TypeDefinitionIndex)->GetStaticField(0x11400);
		}
		::UnityEngine::Vector2 Range; // 0x10
		::UnityEngine::Vector2 ControlPointDistRange; // 0x18
		::System::Single Tolerance; // 0x20
		::System::Single Offset; // 0x24
		::System::Single HandleControl; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_CURVEGENERATESETTING__CCTOR_OFFSET))();
		}
	};
}

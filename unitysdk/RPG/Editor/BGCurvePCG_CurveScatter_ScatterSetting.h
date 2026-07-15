#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_SCATTERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x384F6B0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_ScatterSetting_TypeDefinitionIndex = 49651;

	struct alignas(4) BGCurvePCG_CurveScatter_ScatterSetting
	{
		::UnityEngine::Vector2 ScatterRange; // 0x10
		::System::Boolean IfDoubleSide; // 0x18
		::System::Single Offset; // 0x1C
		::System::Single NormalOffset; // 0x20
		::System::Single Scale; // 0x24
		::System::Single Distance; // 0x28

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_SCATTERSETTING__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}

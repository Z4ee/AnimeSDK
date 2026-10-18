#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_CLASS_1_C1DCB25A16EBA076__CTOR_OFFSET UNITYSDK_OFFSET(0xE496370)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076_TypeDefinitionIndex = 52021;

	class BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x10
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x20
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_CLASS_1_C1DCB25A16EBA076__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_CLASS_1_5807397403863C28__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4DEC0)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	inline static constexpr unsigned int PVSSceneBudgetStatToolWindowVisualizeHelper_Class_1_5807397403863C28_TypeDefinitionIndex = 49429;

	class PVSSceneBudgetStatToolWindowVisualizeHelper_Class_1_5807397403863C28 : public ::System::Object
	{
	public:
		::UnityEngine::Color Field_1_0; // 0x10
		::UnityEngine::Bounds Field_1_1; // 0x20

		::System::Void _ctor(::UnityEngine::Bounds a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_CLASS_1_5807397403863C28__CTOR_OFFSET))(this, a1, a2);
		}
	};
}

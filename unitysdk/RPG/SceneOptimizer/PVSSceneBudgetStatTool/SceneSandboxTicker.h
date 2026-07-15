#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/SceneOptimizer/PVSSceneBudgetStatTool/SceneSandboxTicker_Struct_2_E00E7B890CF96564.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_REGISTERNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x19D4F020)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_REGISTERTICK_OFFSET UNITYSDK_OFFSET(0x19D4EEA0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_UNREGISTERTICK_OFFSET UNITYSDK_OFFSET(0x19D4EFB0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19D4F0E0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4F4D0)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	inline static constexpr unsigned int SceneSandboxTicker_TypeDefinitionIndex = 49431;

	class SceneSandboxTicker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::RPG::SceneOptimizer::PVSSceneBudgetStatTool::SceneSandboxTicker_Struct_2_E00E7B890CF96564>* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterTick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_REGISTERTICK_OFFSET))(this, a1);
		}

		::System::Void UnregisterTick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_UNREGISTERTICK_OFFSET))(this, a1);
		}

		::System::Void RegisterNextFrame(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_REGISTERNEXTFRAME_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_SCENESANDBOXTICKER_UPDATE_OFFSET))(this);
		}
	};
}

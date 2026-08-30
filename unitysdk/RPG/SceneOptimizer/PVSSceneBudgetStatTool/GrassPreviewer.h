#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE7ECAE0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE7EC9C0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE7EC9B0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE7ECBA0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE7ECB30)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_REGISTER_OFFSET UNITYSDK_OFFSET(0xE7ECA40)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0xE7ECC10)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	inline static constexpr unsigned int GrassPreviewer_TypeDefinitionIndex = 52081;

	class GrassPreviewer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PipelineCmdSlot EDOEKNHEGBI; // 0x18
		::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* PCAPFFBHHGC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Register(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_CLEAR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GRASSPREVIEWER_ONDISABLE_OFFSET))(this);
		}
	};
}

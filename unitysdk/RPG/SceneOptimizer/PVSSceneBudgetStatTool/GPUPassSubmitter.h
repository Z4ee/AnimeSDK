#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B50A870)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B50A7D0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B50AAB0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B50A7E0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B50A8F0)
#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50AB20)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	inline static constexpr unsigned int GPUPassSubmitter_TypeDefinitionIndex = 52080;

	class GPUPassSubmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Name; // 0x18
		::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* APAMCGJLKLN; // 0x20
		::System::Action* PPHHKOADEDH; // 0x28
		::PipelineCmdSlot EPDBELNLNPL; // 0x30
		::System::Int32 InterFrame; // 0x34
		::System::Int32 IDGJMPLMMCE; // 0x38
		::System::Boolean KNDIDPBNEJJ; // 0x3C
		::System::Boolean DebugMode; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_GET_KEY_OFFSET))(this);
		}

		::System::Void Register(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* a1, ::System::Action* a2, ::PipelineCmdSlot a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*, ::System::Action*, ::PipelineCmdSlot))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_REGISTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_GPUPASSSUBMITTER_ONDISABLE_OFFSET))(this);
		}
	};
}

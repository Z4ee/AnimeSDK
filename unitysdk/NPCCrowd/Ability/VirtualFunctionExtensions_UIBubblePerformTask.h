#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/UIBubblePerformTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xEC7AA20)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xEC7AAC0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xEC7A990)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_LINK_OFFSET UNITYSDK_OFFSET(0xEC7A920)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_TICK_OFFSET UNITYSDK_OFFSET(0xEC7AB60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_UIBubblePerformTask_TypeDefinitionIndex = 69341;

	class VirtualFunctionExtensions_UIBubblePerformTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::UIBubblePerformTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::UIBubblePerformTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::UIBubblePerformTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::UIBubblePerformTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::UIBubblePerformTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::UIBubblePerformTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::UIBubblePerformTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::UIBubblePerformTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::UIBubblePerformTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::UIBubblePerformTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_UIBUBBLEPERFORMTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}

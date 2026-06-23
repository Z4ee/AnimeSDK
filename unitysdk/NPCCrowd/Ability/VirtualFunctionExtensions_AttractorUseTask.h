#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AttractorUseTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xF9A6500)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xF9A65A0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF9A6470)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_LINK_OFFSET UNITYSDK_OFFSET(0xF9A6400)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_TICK_OFFSET UNITYSDK_OFFSET(0xF9A6640)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AttractorUseTask_TypeDefinitionIndex = 68764;

	class VirtualFunctionExtensions_AttractorUseTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorUseTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORUSETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}

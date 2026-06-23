#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xE016380)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xE0163F0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xE016320)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_LINK_OFFSET UNITYSDK_OFFSET(0xE0162B0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xE016460)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE016500)
#define NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xE016580)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_NavmeshToPathFollowTask_TypeDefinitionIndex = 58045;

	class VirtualProxy_NavmeshToPathFollowTask : public ::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_NAVMESHTOPATHFOLLOWTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_StateTreeCrowdConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x10C93610)
#define NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x10C93760)
#define NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x10C936C0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x10C937C0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x10C93830)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_GameplayTagContainerMatchCondition_TypeDefinitionIndex = 84894;

	class VirtualProxy_GameplayTagContainerMatchCondition : public ::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}

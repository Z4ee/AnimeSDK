#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeConditionBase.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0xFBFC840)
#define NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xFBFC950)
#define NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xFBFC8E0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xFBFC9B0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xFBFCA20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_HasReactionCondition_TypeDefinitionIndex = 68724;

	class VirtualProxy_HasReactionCondition : public ::StateTreeCore::VirtualProxy_StateTreeConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_HASREACTIONCONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}

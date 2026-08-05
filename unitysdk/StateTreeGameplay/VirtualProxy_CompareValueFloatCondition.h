#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/VirtualProxy_StateTreeCommonConditionBase.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1F1CB530)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1F1CB5E0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1F1CB640)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1CB700)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_CompareValueFloatCondition_TypeDefinitionIndex = 60877;

	class VirtualProxy_CompareValueFloatCondition : public ::StateTreeGameplay::VirtualProxy_StateTreeCommonConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}

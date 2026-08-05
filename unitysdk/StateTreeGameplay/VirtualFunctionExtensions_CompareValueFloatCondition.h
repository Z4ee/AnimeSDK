#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/CompareValueFloatCondition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C13E770)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C13E840)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C13E8C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CompareValueFloatCondition_TypeDefinitionIndex = 59965;

	class VirtualFunctionExtensions_CompareValueFloatCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::CompareValueFloatCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::CompareValueFloatCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::CompareValueFloatCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::CompareValueFloatCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::StateTreeGameplay::CompareValueFloatCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::CompareValueFloatCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}

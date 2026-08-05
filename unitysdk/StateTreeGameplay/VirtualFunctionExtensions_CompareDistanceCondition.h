#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/CompareDistanceCondition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1878F140)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1878F1E0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1878F260)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CompareDistanceCondition_TypeDefinitionIndex = 49913;

	class VirtualFunctionExtensions_CompareDistanceCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::CompareDistanceCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::CompareDistanceCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::CompareDistanceCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::CompareDistanceCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::StateTreeGameplay::CompareDistanceCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::CompareDistanceCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_COMPAREDISTANCECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}

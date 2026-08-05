#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_NODEINSTANCEDATASCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACD050)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_NODEINSTANCEDATASCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xACCFC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_NodeInstanceDataScope_TypeDefinitionIndex = 31534;

	struct alignas(8) StateTreeExecutionContext_NodeInstanceDataScope
	{
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeExecutionContext> _context; // 0x10
		::StateTreeCore::StateTreeDataHandle _savedNodeDataHandle; // 0x18
		::StateTreeCore::StateTreeDataView _savedNodeInstanceData; // 0x20

		::System::Void _ctor(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeDataHandle nodeDataHandle, ::StateTreeCore::StateTreeDataView nodeInstanceData)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeDataHandle, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_NODEINSTANCEDATASCOPE__CTOR_OFFSET))(this, context, nodeDataHandle, nodeInstanceData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_NODEINSTANCEDATASCOPE_DISPOSE_OFFSET))(this);
		}
	};
}

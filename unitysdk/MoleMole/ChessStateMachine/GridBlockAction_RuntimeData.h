#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x7D9120)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridBlockAction_RuntimeData_TypeDefinitionIndex = 77576;

	struct alignas(1) GridBlockAction_RuntimeData
	{
		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}

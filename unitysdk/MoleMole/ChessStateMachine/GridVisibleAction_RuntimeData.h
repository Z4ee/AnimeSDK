#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x5B3B50)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridVisibleAction_RuntimeData_TypeDefinitionIndex = 42191;

	struct alignas(1) GridVisibleAction_RuntimeData
	{
		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}

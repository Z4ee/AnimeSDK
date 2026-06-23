#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x79C830)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetEntityLifeStateToDieEnd_RuntimeData_TypeDefinitionIndex = 84343;

	struct alignas(1) SetEntityLifeStateToDieEnd_RuntimeData
	{
		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}

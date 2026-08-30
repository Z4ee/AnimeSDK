#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGAction_ActionType.h"
#include "unitysdk/System/Object.h"

#define MONOPROGRAMMATRIXTRANSFERANIM_PCGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C962B0)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_PCGAction_TypeDefinitionIndex = 47971;

class MonoProgramMatrixTransferAnim_PCGAction : public ::System::Object
{
public:
	::System::Int32 TickDuringAction; // 0x10
	::MonoProgramMatrixTransferAnim_PCGAction_ActionType MoveAction; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGACTION__CTOR_OFFSET))(this);
	}
};
